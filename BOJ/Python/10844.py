from sys import stdin
import math

input = stdin.read().splitlines()

N = int(input[0])
dp = [[0] * 12 for _ in range(N) ]


if N == 1:
    print(9)
else:
    dp[0] = [0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0]
    
    for n in range(1, N):
        for i in range(1, 11):
            dp[n][i] = dp[n-1][i-1] + dp[n-1][i+1] 
        
    print(sum(dp[N-1]) % 1000000000)