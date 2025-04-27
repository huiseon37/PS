from sys import stdin
import heapq

user_input = stdin.read().splitlines()
N = int(user_input[0])

arr = []
for i in range(1, N+1):
    x = int(user_input[i])
    
    if x == 0:
        if len(arr) == 0:
            print(0)
        else:
            print(heapq.heappop(arr)[1])
    else:
        heapq.heappush(arr, (abs(x), x))
        