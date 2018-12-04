#!/usr/bin/python3


def uppercase(str):
    for c in str[:]:
        c_ascii = ord(c)
        if c_ascii >= 97 and c_ascii <= 122:
            print('{}'.format(chr(c_ascii - 32)), end="")
        else:
            print('{}'.format(c), end="")
    print()
