from sys import stdin
import math

input = stdin.read().splitlines()

N = int(input[0])
triangle = [list(map(int, input[i].split())) for i in range(1, N+1)]
dp = [ [0]*i for i in range(3, N+3)]

dp[0][1] = triangle[0][0]

for i in range(1, N):
    for j in range(1, i+2):
        now = triangle[i][j-1]
        dp[i][j] = max(dp[i-1][j-1] + now, dp[i-1][j] + now)

print(max(dp[N-1]))