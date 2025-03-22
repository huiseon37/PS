from sys import stdin
from collections import deque
from collections import Counter

input = stdin.readline()

T = int(input)

dx = [-1, 0, 0, 1]
dy = [0 , -1, 1, 0]

def bfs(start):
    q = deque()
    q.append(start)
    visit[start[1]][start[0]] = 1
    
    while q:
        i, j = q.popleft()
        
        for a in range(4):
            x, y =  i+dx[a], j+dy[a]
            if 0 <= x < M and 0 <= y < N and metrix[y][x] == 1 and visit[y][x] == 0:
                visit[y][x] = 1
                q.append((x, y))
        
    return 1
        
    
for _ in range(T):
    M, N, K = map(int, stdin.readline().split())
    place = [ tuple(map(int, stdin.readline().split())) for _ in range(K)]
    
    metrix = [[0] * M for _ in range(N)]
    visit = [[0] * M for _ in range(N)]
    ans = 0
    
    for x, y in place:
        metrix[y][x] = 1
    
    for x, y in place:
        if visit[y][x] == 0:
            ans += bfs((x, y))
    
    print(ans)