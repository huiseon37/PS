from sys import stdin
from collections import deque
from collections import Counter

input = stdin.read().splitlines()

N = int(input[0])
metrix = [ list(map(int, ip)) for ip in input[1:]]

graph = []

for i, ip in enumerate(metrix):
    for j, n in enumerate(ip):
        if n == 1:
            graph.append((i, j))
            
visit = [ [0] * N for _ in range(N)]

dx = [0, 1, -1, 0]
dy = [-1, 0, 0, 1]

def bfs(start, cnt):
    q = deque()
    q.append(start)
    
    while q:
        i, j = q.popleft()
        
        if visit[i][j] == 0:
            visit[i][j] = cnt
            for a in range(4):
                x, y = i+dx[a], j+dy[a]
                
                if 0 <= x < N and 0 <= y < N and metrix[x][y] == 1:
                    q.append((x, y))
cnt = 1
for t in graph:
    bfs(t, cnt)
    cnt += 1

l = [num for v in visit for num in v if num != 0]
counter = sorted(Counter(l).most_common(), key=lambda x: x[1])

print(len(counter))
for _, ans in counter:
    print(ans)

        