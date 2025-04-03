from sys import stdin
import math

input = stdin.read().splitlines()

N = int(input[0])
nums = [int(input[i]) for i in range(1, N+1)]
dp = [0] * (N+1)


if N == 1:
    print(nums[0])
    exit()
    
if N == 2: 
    print(nums[1] + nums[0])
    exit()
    
dp[1] = nums[0]
dp[2] = nums[1] + nums[0]

for i in range(3, N+1):
    dp[i] = max(
        dp[i-2] + nums[i-1], 
        dp[i-3] + nums[i-1] + nums[i-2],
        dp[i-1]
    )

print(max(dp))