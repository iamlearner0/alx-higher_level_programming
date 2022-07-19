#!/usr/bin/python3
def remove_char_at(str, n):
    strCpy = ""
    count = 0
    for c in str:
        if count == n:
            pass
        else:
            strCpy += c
        count += 1
    return strCpy
