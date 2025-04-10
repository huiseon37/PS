from sys import stdin
import math

input = stdin.read().splitlines()

N = int(input[0])
A = list(map(int, input[1].split()))
dp = [0] * N

dp[0] = 1

if N == 1:
    print(1)
    exit()
    
for i in range(1, N):
    num = A[i]
    max_sum = 1
    for j in range(i):
        if A[j] < num:
            max_sum = max(max_sum, dp[j]+1)
    dp[i] = max_sum

print(max(dp))