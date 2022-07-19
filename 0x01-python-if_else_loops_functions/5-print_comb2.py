#!/usr/bin/python3
for charpair in range(0, 100):
    if charpair != 99:
        print("{:02d}, ".format(charpair), end='')

    else:
        print("{:02d}".format(charpair))
