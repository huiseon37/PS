from sys import stdin
import bisect

input = stdin.read().splitlines()

K, N = map(int, input[0].split())
stick = [int(input[i]) for i in range(1, K+1)]

start = 1
end = max(stick)
ans = 0

while start <= end:
    mid = (start + end) // 2
    total = sum( s // mid for s in stick )
    
    if total >= N:
        ans = mid
        start = mid + 1 
    else:
        end = mid - 1

print(ans)