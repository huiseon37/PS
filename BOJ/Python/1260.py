from sys import stdin
from collections import deque

# N = int(stdin.readline().strip())
N, M, R = map(int, stdin.readline().split())
# node_list = [tuple(map(int,stdin.readline().split())) for i in range(1,M+1)]

graph = {i:[] for i in range(1,N+1)}

for i in range(1,M+1):
    u, v = map(int, stdin.readline().split())
    graph[u].append(v)
    graph[v].append(u)

for node in graph:
    graph[node].sort()

def bfs(graph, R):
    visited = []
    queue = deque([R])
    
    while queue:
        node = queue.popleft()
        if node not in visited:
            visited.append(node)
            queue.extend(graph[node])
            
    return visited

def dfs(graph, R):
    visited = []
    stack = [R]
    
    while stack:
        node = stack.pop()
        if node not in visited:
            visited.append(node)
            stack.extend(reversed(graph[node]))
    
    return visited

print(*dfs(graph, R))
print(*bfs(graph, R))