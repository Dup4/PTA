#! /usr/bin/env python3

import json
import logging
import os
import textwrap
from typing import Any, List
import requests


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

        statement = problem['content'].replace(
            "```in", "```plaintext").replace("```out", "```plaintext")

        statement = textwrap.dedent('''
# {} {}

## Statement

!!! info "Metadata"
    作者: {}
    单位: {}
    代码长度限制: {} KB
    时间限制: {} ms
    内存限制: {} MB

{}

                    '''.format(label, title, author, author_organization_name, code_size_limit, time_limit, memory_limit // 1024, statement))

        statement_dst = os.path.join(current_dst, "statement.md")
        with open(statement_dst, "w") as f:
            f.write(statement)

        example_test_data = unique(
            problem['problemConfig']['programmingProblemConfig']['exampleTestDatas'])

        current_test_data_path = os.path.join(current_dst, "test-data")
        ensure_dir(current_test_data_path)
        for i in range(len(example_test_data)):
            current_in_dst = os.path.join(
                current_test_data_path, "{}.in".format(i + 1))
            current_out_dst = os.path.join(
                current_test_data_path, "{}.out".format(i + 1))
            with open(current_in_dst, "w") as f:
                f.write(example_test_data[i]['input'])

            with open(current_out_dst, "w") as f:
                f.write(example_test_data[i]['output'])

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

    # download_problem_set("994805046380707840", "./CCCC")
    download_problem_set("994805260223102976", "./PAT-Basic-Level")
    download_problem_set("994805342720868352", "./PAT-Advanced-Level")
    download_problem_set("994805148990160896", "./PAT-Top-Level")


if __name__ == '__main__':
    main()
