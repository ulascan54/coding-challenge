# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import defaultdict
n, m = map(int, input().split())
d = defaultdict(list)
for i in range(n):
    d[input()].append(i+1)
for j in range(m):
    s = input()
    if s in d:
        print(*d[s])
    else:
        print(-1)