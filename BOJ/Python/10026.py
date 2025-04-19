from sys import stdin
from collections import deque

user_input = stdin.read().splitlines()
N = int(user_input[0])
draw = [list(user_input[i]) for i in range(1, N+1)]

normal = [[0]*N for _ in range(N)]
rg = [[0]*N for _ in range(N)]

dx = [0,0,1,-1]
dy = [1,-1,0,0]

def normalBFS(i, j):
    if normal[i][j] != 0:
        return 0
        
    que = deque()
    que.append((i,j))
    color = draw[i][j]
    normal[i][j] = color
    
    while que:
        x, y = que.popleft()
        
        for a in range(4):
            nowx = x+dx[a]
            nowy = y+dy[a]
            
            if 0<=nowx<N and 0<=nowy<N and draw[nowx][nowy] == color and normal[nowx][nowy] == 0:
                normal[nowx][nowy] = color
                que.append((nowx, nowy))
    return 1
    
def rgBFS(i, j):
    if rg[i][j] != 0:
        return 0
        
    que = deque()
    que.append((i,j))
    color = draw[i][j]
    rg[i][j] = color
    
    while que:
        x, y = que.popleft()
        
        for a in range(4):
            nowx = x+dx[a]
            nowy = y+dy[a]
            
            if 0<=nowx<N and 0<=nowy<N:
                if color == "R" or color == "G":
                    if (draw[nowx][nowy] == "R" or draw[nowx][nowy] == "G") and rg[nowx][nowy] == 0:
                        rg[nowx][nowy] = color
                        que.append((nowx, nowy))
                else:
                    if draw[nowx][nowy] == "B" and rg[nowx][nowy] == 0:
                        rg[nowx][nowy] = color
                        que.append((nowx, nowy))
    return 1
    
normal_ans = 0
rg_ans = 0

for i in range(N):
    for j in range(N):
        normal_ans += normalBFS(i, j)
        rg_ans += rgBFS(i, j)
            
print(normal_ans, rg_ans) 
        