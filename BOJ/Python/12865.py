from sys import stdin

input = stdin.read().splitlines()

N, K = map(int, input[0].split())
bag = [tuple(map(int, input[i].split())) for i in range(1, N+1)]

dp = [[0] * (K+1) for _ in range(N+1)]
weight = K

for i in range(1, N+1):
    now_w, now_v = bag[i-1]
    
    for w in range(K+1):
        if now_w > w:
            dp[i][w] = dp[i-1][w]
        else:
            # 넣말
            dp[i][w] = max(dp[i-1][w-now_w] + now_v, dp[i-1][w])
            
print(dp[N][K])