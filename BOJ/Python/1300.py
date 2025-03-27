from sys import stdin

input = stdin.read().splitlines()

N = int(input[0])
k = int(input[1])

start = 1
end = N*N
ans = 0

while start <= end:
    mid = (start + end) // 2
    total = sum([min(mid // i, N) for i in range(1, N+1)])

    if total >= k:
        end = mid - 1
        ans = mid
    else:
        start = mid + 1
    
print(ans)
