from sys import stdin
from collections import deque

user_input = stdin.read().splitlines()
N = int(user_input[0])
graph = [ []*N for _ in range(N)]
for i in range(1,N+1):
    for j, num in enumerate(map(int,user_input[i].split())):
        if num == 1:
            graph[i-1].append(j)
            
ans = [[0]*N for _ in range(N)]
que = deque()

for i in range(N):
    que.extend(graph[i])
    visit = []
    
    while que:
        node = que.popleft()
        
        if node not in visit:
            visit.append(node)
            ans[i][node] = 1
            que.extend(graph[node])
        
for i in range(N):
    print(*ans[i])