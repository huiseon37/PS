from sys import stdin
import math

input = stdin.read().splitlines()

N = int(input[0])
lines = [tuple(map(int, input[i].split())) for i in range(1, N+1)]
lines = sorted(lines, key = lambda x: x[0])
dp = [0] * N

if N == 1:
    print(0)
    exit()

dp[0] = 1

for i in range(1, N):
    max_sum = 1
    current = lines[i][1]
    for j in range(i):
        if lines[j][1] < current:
            max_sum = max(max_sum, dp[j] + 1)
    dp[i] = max_sum

print(N-max(dp))
    