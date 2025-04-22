from sys import stdin

user_input = stdin.read().splitlines()
N, M = map(int, user_input[0].split())
site = dict()
for i in range(1, 1+N):
    domain, password = user_input[i].split()
    site[domain] = password

for i in range(N+1, N+M+1):
    domain = user_input[i]
    print(site[domain])
