from sys import stdin
import math

input = stdin.read().splitlines()

N = int(input[0])
rgb = [list(map(int, input[i].split())) for i in range(1, N+1)]
dp = [[0, 0, 0] for _ in range(N)]

dp[0] = rgb[0]

for i in range(1,N):
    for j in range(3):
        dp[i][j] = min(dp[i-1][(j+1)%3] + rgb[i][j], dp[i-1][(j+2)%3] + rgb[i][j]) 

print(min(dp[N-1]))