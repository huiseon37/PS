from sys import stdin

input = stdin.read().splitlines()

N, M, K = map(int, input[0].split())

metrix = [list(ip) for ip in input[1:]]
w_diff = [[0]*M  for _ in range(N)]
b_diff = [[0]*M  for _ in range(N)]
w_board = [['W' if (m+n) % 2 == 0 else 'B' for m in range(M)] for n in range(N)]
b_board = [['B' if (m+n) % 2 == 0 else 'W' for m in range(M)] for n in range(N)]
w_prefix = [[0]*(M+1)  for i in range(N+1)]
b_prefix = [[0]*(M+1)  for i in range(N+1)]

for n in range(N):
    for m in range(M):
        if metrix[n][m] != w_board[n][m]:
            w_diff[n][m] = 1
        if metrix[n][m] != b_board[n][m]:
            b_diff[n][m] = 1

for n in range(1, N+1):
    for m in range(1, M+1):
        w_prefix[n][m] = w_prefix[n-1][m] + w_prefix[n][m-1] + w_diff[n-1][m-1] - w_prefix[n-1][m-1]
        b_prefix[n][m] = b_prefix[n-1][m] + b_prefix[n][m-1] + b_diff[n-1][m-1] - b_prefix[n-1][m-1]

ans = N * M  
for n in range(K-1, N):
    for m in range(K-1, M):
        x1, y1, x2, y2 = n-K+2, m-K+2, n+1, m+1
        w_sum = w_prefix[x2][y2] - w_prefix[x1-1][y2] - w_prefix[x2][y1-1] + w_prefix[x1-1][y1-1]
        b_sum = b_prefix[x2][y2] - b_prefix[x1-1][y2] - b_prefix[x2][y1-1] + b_prefix[x1-1][y1-1]
        
        ans = min(ans, w_sum, b_sum)

print(ans)
        