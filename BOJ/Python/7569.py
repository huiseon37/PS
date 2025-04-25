from sys import stdin
from collections import deque

user_input = stdin.readline().split()
M, N, H = map(int,user_input)

tomato = []

for _ in range(H):
    arr = []
    for _ in range(N):
        arr.append(list(map(int, stdin.readline().strip().split())))
    tomato.append(arr)
    
que = deque()

for z in range(H):
    for y in range(N):
        for x in range(M):
            if tomato[z][y][x] == 1:
                que.append((z, y, x))

dx = [-1, 1, 0, 0, 0, 0]
dy = [0, 0, -1, 1, 0, 0]
dz = [0, 0, 0, 0, -1, 1]

while que:
    z, y, x = que.popleft()
    
    for i in range(6):
        nowz = z+dz[i]
        nowy = y+dy[i]
        nowx = x+dx[i]
        day = tomato[z][y][x]
        
        if 0<=nowz<H and 0<=nowy<N and 0<=nowx<M and tomato[nowz][nowy][nowx] == 0:
            tomato[nowz][nowy][nowx] = day+1
            que.append((nowz, nowy, nowx))

ans = set()      
for z in range(H):
    for y in range(N):
        for x in range(M):
            ans.add(tomato[z][y][x])
            if tomato[z][y][x] == 0:
                print(-1)
                exit()
                
print(max(ans)-1)
        
        
        
        
        