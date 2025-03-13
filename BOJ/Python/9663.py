from sys import stdin
from collections import deque

input = stdin.read().splitlines()

N = int(input[0])
ans = 0
cols = [0] * N
diag1 = [0] * (2*N-1)
diag2 = [0] * (2*N-1)

def is_positive(n, row, col):
    if cols[col] or diag1[row+col] or diag2[row-col+n-1]:
        return False
    return True
    
def solve(n, row):
    global ans
    
    if row == n:
        ans += 1
        return
    
    for col in range(n):
        if is_positive(n, row, col):
            cols[col] = 1
            diag1[row+col] = 1
            diag2[row - col + n - 1] = 1
            solve(n, row+1)
            cols[col] = 0
            diag1[row+col] = 0
            diag2[row - col + n - 1] = 0
        
    
solve(N, 0)
print(ans)