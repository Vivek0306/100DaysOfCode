# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations
string, size = input().split()

for j in range(1,int(size) + 1):
    for i in combinations(sorted(string), int(j)):
        print(''.join(i))

