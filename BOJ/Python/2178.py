from sys import stdin
from collections import deque

# N = int(stdin.readline().strip())
N, M = map(int, stdin.readline().split())
# node_list = [tuple(map(int,stdin.readline().split())) for i in range(1,M+1)]

metrix = [ list(stdin.readline().strip()) for _ in range(N)]

visit = [ [0] * M for _ in range(N)]
queue = deque([(0,0,1)])
dis_n = [0, 0, -1, 1]
dis_m = [-1, 1, 0, 0]
now_n, now_m = -1, -1
order = 0

while True:
    now_n, now_m, dis = queue.popleft()
    
    if now_n == N-1 and now_m == M-1:
        print(dis)
        exit()
    
    if not visit[now_n][now_m]:
        visit[now_n][now_m] = 1
        for i in range(4):
            x, y = dis_n[i], dis_m[i]
            if now_n + x < N and now_n + x >= 0 and now_m + y < M and now_m + y >= 0 and metrix[now_n + x][now_m + y] == '1':
                queue.append((now_n+x, now_m+y, dis+1))
