from sys import stdin
import bisect

input = stdin.read().splitlines()

N, C = map(int, input[0].split())
house = sorted([int(input[i]) for i in range(1, N+1)])

start = 1
end = max(house) - min(house)
ans = 0
    
def solution(mid):
    global C
    global house
    
    current = house[0]
    count = 1
    for h in house:
        if h >= (current + mid):
            count += 1
            current = h
    return True if count >= C else False
    
while start <= end:
    mid = (start + end) // 2
    
    if solution(mid):
        ans = mid
        start = mid + 1
    else:
        end = mid - 1
        
print(ans)
    
    