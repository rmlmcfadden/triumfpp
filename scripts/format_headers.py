#!/usr/bin/python3

import os
from glob import glob

headers = glob("../include/**/*.hpp", recursive=True)

for header in headers:
    os.system("clang-format -i %s" % header)
