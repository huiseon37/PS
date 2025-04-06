from sys import stdin
import bisect

input = stdin.read().splitlines()

K, N = map(int, input[0].split())
trees = list(map(int, input[1].split()))

start = 0
end = max(trees)
ans = 0

while start <= end:
    mid = (start + end) // 2
    total = sum( t - mid for t in trees if t > mid)
    
    if total >= N:
        ans = mid
        start = mid + 1
    else:
        end = mid - 1

print(ans)