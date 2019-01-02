#!/usr/bin/python3
import sys


def safe_function(fct, *args):
    result = None
    try:
        result = fct(args[0], args[1])
    except Exception as err:
        sys.stderr.write("Exception: " + err.__str__() + "\n")
        return None
    else:
        return result
