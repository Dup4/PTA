#! /usr/bin/env python3

import json
import logging
import os
from typing import Any, List
import requests
import re
import regex
import shutil


def json_input(path):
    with open(path, "r") as f:
        return json.load(f)


PARAMS = json_input("params.json")
COOKIES = PARAMS["cookies"]


def unique(l: List) -> List:
    res = []

    for item in l:
        if not item in res:
            res.append(item)

    return res


def url_join(url, *args):
    url = url.rstrip('/')

    for arg in args:
        arg = arg.strip('/')
        url = "{}/{}".format(url, arg)

    return url


def ensure_dir(path):
    if not os.path.exists(path):
        os.makedirs(path)


def init_logging():
    global logger

    logger = logging.getLogger(__name__)
    logger.setLevel(logging.INFO)

    formatter = logging.Formatter(
        '%(asctime)s - %(filename)s[line:%(lineno)d] - %(levelname)s: %(message)s')
    consoleHandler = logging.StreamHandler()
    consoleHandler.setFormatter(formatter)

    logger.addHandler(consoleHandler)


def urllib_download(img_url: str, dist: str):
    from urllib.request import urlretrieve
    urlretrieve(img_url, filename=dist)


def call_api(url: str) -> str:
    headers = {
        "cookie": COOKIES,
        "Accept": "application/json;charset=UTF-8",
        "Accept-Language": "zh-CN",
        "Content-Type": "application/json;charset=UTF-8",
        "Referer": url,
    }

    for i in range(5):
        resp = requests.get(url, headers=headers)
        if resp.status_code == 200:
            return json.loads(resp.text)

    return ""


def call_exam_problem_status(problem_set_id: str) -> str:
    return call_api("https://pintia.cn/api/problem-sets/{}/exam-problem-status?".format(problem_set_id))


def call_problem(problem_set_id: str, problem_id: str) -> str:
    return call_api("https://pintia.cn/api/problem-sets/{}/problems/{}".format(problem_set_id, problem_id))


def get_lang_ext(lang: str) -> str:
    if lang == "GCC" or lang == "CLANG":
        return "c"

    if lang == "GXX" or lang == "CLANGXX":
        return "cpp"

    if lang == "JAVA":
        return "java"

    if lang == "PYTHON2" or lang == "PYTHON3":
        return "py"

    if lang == "GO":
        return "go"

    if lang == "NODE":
        return "js"

    if lang == "BASH":
        return "sh"

    if lang == "PHP":
        return "php"

    if lang == "RUST":
        return "rs"


def download_images(statement: str, dst: str) -> str:
    STATEMENT_ASSETS = "statement-assets"
    USER_CONTENT_URL = "https://images.ptausercontent.com/"

    result_statement = statement

    current_dst = os.path.join(dst, STATEMENT_ASSETS)
    if os.path.exists(current_dst):
        shutil.rmtree(current_dst)
    ensure_dir(current_dst)

    for uri in regex.finditer(r"\!\[(.*)\]\((.*)\)", statement):
        uri = uri.group(2)
        raw_url = uri.replace("~/", "")
        url = url_join(USER_CONTENT_URL, raw_url)

        urllib_download(url, os.path.join(current_dst, raw_url))
        result_statement = result_statement.replace(
            uri, os.path.join("./", STATEMENT_ASSETS, raw_url))

        logger.info(
            "download image success. [uri={}, url={}]".format(uri, url))

    return result_statement


def download_problem_set(problem_set_id: str, dst: str) -> None:
    ensure_dir(dst)

    exam_problem_status = call_exam_problem_status(problem_set_id)[
        "problemStatus"]

    for item in exam_problem_status:
        problem = call_problem(problem_set_id, item['id'])['problemSetProblem']

        author = problem['author']
        author_organization_name = problem['authorOrganization']['name']
        code_size_limit = problem['problemConfig']['programmingProblemConfig']['codeSizeLimit']
        time_limit = problem['problemConfig']['programmingProblemConfig']['timeLimit']
        memory_limit = problem['problemConfig']['programmingProblemConfig']['memoryLimit']
        label = problem['label']
        title = problem['title']

        current_dst = os.path.join(dst, "{}-{}".format(label, title))
        ensure_dir(current_dst)

        statement = problem['content']
        statement = statement.replace("```in", "```plaintext")
        statement = statement.replace("```out", "```plaintext")
        statement = statement.replace("$$", "$")
        statement = re.sub(r"### (.*)：", "### \g<1>:", statement)
        statement = re.sub(r"### (.*):", "**\g<1>**", statement)
        statement = download_images(statement, current_dst)

        statement = '''
# {} {}

## Statement

!!! info "Metadata"
    - 作者: {}
    - 单位: {}
    - 代码长度限制: {} KB
    - 时间限制: {} ms
    - 内存限制: {} MB

{}
'''.format(label, title, author, author_organization_name, code_size_limit, time_limit, memory_limit // 1024, statement)

        statement_dst = os.path.join(current_dst, "statement.md")
        with open(statement_dst, "w") as f:
            f.write(statement)

        example_test_data = unique(
            problem['problemConfig']['programmingProblemConfig']['exampleTestDatas'])

        current_test_data_path = os.path.join(current_dst, "test-data")
        ensure_dir(current_test_data_path)
        for i, test_data in enumerate(example_test_data):
            current_in_dst = os.path.join(
                current_test_data_path, "{}.in".format(i + 1))
            current_out_dst = os.path.join(
                current_test_data_path, "{}.out".format(i + 1))
            with open(current_in_dst, "w") as f:
                f.write(test_data['input'])
            with open(current_out_dst, "w") as f:
                f.write(test_data['output'])

        if item['problemSubmissionStatus'] == "PROBLEM_ACCEPTED":
            last_submission_ext = get_lang_ext(
                problem['lastSubmissionDetail']['programmingSubmissionDetail']['compiler'])
            last_submission_program = problem['lastSubmissionDetail']['programmingSubmissionDetail']['program'].replace(
                "\\r\\n", "\\n")
            current_solution_dst = os.path.join(
                current_dst, "solution.{}".format(last_submission_ext))
            if not os.path.exists(current_solution_dst):
                with open(current_solution_dst, "w") as f:
                    f.write(last_submission_program)

        logger.info(
            "download problem success. [label={}, title={}]".format(label, title))

    logger.info("download problem set success. [problem_set_id={}, dst={}]".format(
        problem_set_id, dst))


def main() -> None:
    init_logging()

    download_problem_set("994805046380707840", "./CCCC")
    download_problem_set("994805260223102976", "./PAT-Basic-Level")
    download_problem_set("994805342720868352", "./PAT-Advanced-Level")
    download_problem_set("994805148990160896", "./PAT-Top-Level")


if __name__ == '__main__':
    main()
