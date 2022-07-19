#!/usr/bin/python3
def uppercase(str):
    strcase = ""
    for c in str:
        if ord(c) > 96 and ord(c) < 123:
            strcase += chr(ord(c)-32)

        else:
            strcase += c
    print("{}".format(strcase))
