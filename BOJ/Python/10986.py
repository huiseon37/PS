from sys import stdin

input = stdin.read().splitlines()

N, M = map(int, input[0].split())
nums = list(map(int, input[1].split()))
prefix = [0] * (N+1)
count = [0] * M

ans = 0

for i in range(N):
    prefix[i+1] = prefix[i] + nums[i]
    mod = prefix[i+1] % M
    count[mod] += 1

count[0] += 1

for c in count:
    if c >= 2:
        ans += c * (c-1) // 2
        
print(ans)