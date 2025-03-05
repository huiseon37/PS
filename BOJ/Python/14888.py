from sys import stdin
from collections import deque

input = stdin.read().splitlines()
N = int(input[0])
nums = list(map(int,input[1].split()))
A = list(map(int,input[2].split()))

n = 1
stack = [(1, A[0], A[1], A[2], A[3], nums[0])]

ans = set()

while stack:
    depth, plus, minus, multiple, divide, sum = stack.pop()
    
    if depth == N:
        ans.add(sum)
    
    if plus:
        stack.append((depth+1, plus-1, minus, multiple, divide, sum + nums[depth]))
    if minus:
        stack.append((depth+1, plus, minus-1, multiple, divide, sum - nums[depth]))
    if multiple:
        stack.append((depth+1, plus, minus, multiple-1, divide, sum * nums[depth]))
    if divide:
        sum = -(-sum // nums[depth]) if sum < 0 else sum // nums[depth]
        stack.append((depth+1, plus, minus, multiple, divide-1, sum))
        
print(max(ans))
print(min(ans))