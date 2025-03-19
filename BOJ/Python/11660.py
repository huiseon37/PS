from sys import stdin

input = stdin.read().splitlines()

N, M = map(int, input[0].split())

metrix = [list(map(int, input[i].split())) for i in range(1, N+1)]
xy_list = [list(map(int, input[i].split())) for i in range(N+1, N+M+1)]

for i, row in enumerate(metrix):
    for j, col in enumerate(row):
        if j > 0:
            metrix[i][j] += metrix[i][j-1]

for i, row in enumerate(metrix):
    for j, col in enumerate(row):
        if i > 0:
            metrix[i][j] += metrix[i-1][j]
            
for x1, y1, x2, y2 in xy_list:
    x1, y1, x2, y2 = x1-1, y1-1, x2-1, y2-1
    ans = 0
    ans += metrix[x2][y2]
    
    if x1 != 0 and y1 != 0:
        ans += metrix[x1-1][y1-1]
    if x1 != 0:
        ans -= metrix[x1-1][y2]
    if y1 != 0:
        ans -= metrix[x2][y1-1]
        
    print(ans)