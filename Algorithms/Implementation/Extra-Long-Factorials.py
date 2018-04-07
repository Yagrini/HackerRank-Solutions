#!/bin/python

import sys


n = int(raw_input().strip())
print reduce(lambda x, y: x*y, range(n+1)[1:])
