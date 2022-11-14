# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import groupby

s = input()

def grouping(s, keyfunc=None):
    for k, g in groupby(s, keyfunc):
        print(f"({len(list(g))}, {k})", end=" ")

grouping(s)