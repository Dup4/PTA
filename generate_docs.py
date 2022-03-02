import logging
import os
import shutil
from typing import Iterable, List
import yaml

TOP_DIR = os.path.realpath(os.path.dirname(__file__))
MKDOCS_TEMPLATE_YML = os.path.join(TOP_DIR, "mkdocs.template.yml")
NAV_TEMPLATE_YML = os.path.join(TOP_DIR, "nav.template.yml")
MKDOCS_YML = os.path.join(TOP_DIR, "mkdocs.yml")
DOCS_SRC = os.path.join(TOP_DIR, "docs")
DOCS_DST = os.path.join(TOP_DIR, "_docs")


def ensure_dir(path) -> None:
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


def generate_solution_name(solution_prefix: str, src: str, dst: str) -> Iterable:
    LANG_EXT = ["c", "cpp", "java", "py", "go", "js", "sh", "php", "rs"]
    LANG_SLUG = ["C", "C++", "Java", "Python 3",
                 "Go", "Node.Js", "BashScript", "PHP", "Rust"]

    for i, ext in enumerate(LANG_EXT):
        solution_name = "{}.{}".format(solution_prefix, ext)
        solution_src_path = os.path.join(src, solution_name)
        solution_dst_path = os.path.join(dst, solution_name)
        if os.path.exists(solution_src_path):
            os.remove(solution_dst_path)
            yield solution_src_path, ext, LANG_SLUG[i]


def generate_docs(src: str, dst: str, relative_path: str) -> List:
    STATEMENT_FILE_NAME = "statement.md"
    TUTORIAL_FILE_NAME = "tutorial.md"
    SOLUTION_FILE_NAME = "solution"
    INDEX_FILE_NAME = "index.md"
    TEST_DATA_DIR_NAME = "test-data"

    nav_content = []
    shutil.copytree(src, dst)

    dir_list = os.listdir(dst)
    dir_list.sort()

    for dir in dir_list:
        content = ""

        current_src = os.path.join(src, dir)
        current_dst = os.path.join(dst, dir)

        test_data_dst_path = os.path.join(current_dst, TEST_DATA_DIR_NAME)
        if os.path.exists(test_data_dst_path):
            shutil.rmtree(test_data_dst_path)

        statement_src_path = os.path.join(current_src, STATEMENT_FILE_NAME)
        statement_dst_path = os.path.join(current_dst, STATEMENT_FILE_NAME)
        if os.path.exists(statement_src_path):
            os.remove(statement_dst_path)
            content += """
--8<-- "{}"
""".format(statement_src_path)

        tutorial_src_path = os.path.join(current_src, TUTORIAL_FILE_NAME)
        tutorial_dst_path = os.path.join(current_dst, TUTORIAL_FILE_NAME)
        if os.path.exists(tutorial_src_path):
            os.remove(tutorial_dst_path)
            content += """
## Tutorial

---8<--- "{}"
""".format(tutorial_src_path)

        solution_content = ""
        for solution_src_path, lang_ext, lang_slug in generate_solution_name(SOLUTION_FILE_NAME, current_src, current_dst):
            solution_content += """
=== "{}"
```{}
--8<-- "{}"
```
""".format(lang_slug, lang_ext, solution_src_path)

        if len(solution_content) > 0:
            content += """
## Solution

{}
""".format(solution_content)

        index_path = os.path.join(current_dst, INDEX_FILE_NAME)
        with open(index_path, "w") as f:
            f.write(content)

        nav_content.append(
            {dir: os.path.join(relative_path, dir, INDEX_FILE_NAME)})

        logger.info("generate docs success. [dir_name={}]".format(dir))

    return nav_content


def main() -> None:
    init_logging()

    if os.path.exists(DOCS_DST):
        shutil.rmtree(DOCS_DST)
    shutil.copytree(DOCS_SRC, DOCS_DST)
    shutil.copy(MKDOCS_TEMPLATE_YML, MKDOCS_YML)

    PAT_BASIC_LEVEL = "PAT-Basic-Level"
    PAT_ADVANCED_LEVEL = "PAT-Advanced-Level"
    PAT_TOP_LEVEL = "PAT-Top-Level"
    CCCC = "CCCC"

    with open(NAV_TEMPLATE_YML) as f:
        nav_content = yaml.load(f, Loader=yaml.FullLoader)

    if nav_content['nav'] is None:
        nav_content['nav'] = []

    for item in [CCCC, PAT_TOP_LEVEL, PAT_ADVANCED_LEVEL, PAT_BASIC_LEVEL]:
        current_nav_content = generate_docs(
            os.path.join(TOP_DIR, item), os.path.join(DOCS_DST, item), item)
        nav_content['nav'].append({item: current_nav_content})

    with open(MKDOCS_YML, "a") as f:
        f.write(yaml.dump(nav_content, allow_unicode=True))


if __name__ == '__main__':
    main()
