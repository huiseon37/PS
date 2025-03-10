from sys import stdin
from collections import Counter

input = stdin.read().splitlines()

S = input[0]
N = int(input[1])
arr = [tuple(a.split()) for a in input[2:]]

ans = [dict() for _ in range(len(S))]

for i, s in enumerate(S):
    if i > 0:
        ans[i].update(ans[i-1])
        
    if s in ans[i].keys():
        ans[i][s] += 1
    else:
        ans[i][s] = 1

for a, l, r in arr:
    l, r = int(l), int(r)
    
    if l == 0:
        print(ans[r][a] if a in ans[r].keys() else 0)
    else:
        num_r = ans[r][a] if a in ans[r].keys() else 0
        num_l = ans[l-1][a] if a in ans[l-1].keys() else 0
        print(num_r - num_l)