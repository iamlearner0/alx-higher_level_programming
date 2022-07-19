#!/usr/bin/python3
charpair = ", "
for i in range(0, 100):
    char2 = i % 10
    char1 = i / 10

    if i < 10 and char1 < char2:
        print("{}{}".format(0, i), end=charpair)

    elif char1 < char2:
        if i == 89:
            charpair = "\n"
        print(i, end=charpair)
