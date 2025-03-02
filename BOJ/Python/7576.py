from sys import stdin
from collections import deque
from collections import Counter

# N = int(stdin.readline().strip())
M, N = map(int, stdin.readline().split())
tomato = [list(map(int,stdin.readline().split())) for i in range(1,N+1)]

isDone = True
que = deque()

for i in range(N):
    for j in range(M):
        if tomato[i][j] == 0 :
            isDone = False
        if tomato[i][j] == 1 :
            que.append((i,j))
            
        

if isDone:
    print(0)
    exit()

dis_n = [0,0,1,-1]
dis_m = [1,-1,0,0]
day = -1

while que:
    for _ in range(len(que)):
        now_n, now_m = que.popleft()
        for i in range(4):
            x, y = dis_n[i], dis_m[i]
            if now_n + x >= 0 and now_n + x < N and now_m + y >= 0 and now_m + y < M and tomato[now_n+x][now_m+y] == 0:
                tomato[now_n + x][now_m + y] = 1
                que.append((now_n+x, now_m+y))
    day += 1


for row in tomato:
    if 0 in row:
        print(-1)
        exit()

print(day)
                
                
                
                
                
                
                