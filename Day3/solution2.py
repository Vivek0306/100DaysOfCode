# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations
string, size = input().split()
for i in sorted(permutations(sorted(string), int(size))):
    # print(''.join(i))
    print(i)

