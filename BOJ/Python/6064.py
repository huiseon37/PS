from sys import stdin
import math

user_input = stdin.read().splitlines()
T = int(user_input[0])

for i in range(1, 1+T):
    M, N, x, y = map(int, user_input[i].split())
    
    ans = x
    
    while ans <= math.lcm(M, N):
        if (ans - 1) % N + 1 == y:
            break
        ans += M
        
    if ans <= math.lcm(M, N):
        print(ans)
    else:
        print(-1)
    