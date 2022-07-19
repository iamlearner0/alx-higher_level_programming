#!/usr/bin/python3
strASCII = ""
for i in reversed(range(97, 123)):
    if (i % 2) == 0:
        strASCII += chr(i)
    else:
        strASCII += chr(i-32)
print("{}".format(strASCII), end="")
