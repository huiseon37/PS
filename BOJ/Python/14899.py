from sys import stdin
from itertools import combinations
import math

input = stdin.read().splitlines()
N, *data= input

N = int(N)
metrix = [list(map(int,string.split())) for string in data]

def cal_team(t):
    comb = list(combinations(t, 2))
    sum = 0
    for i, j in comb:
        sum += metrix[i][j]
        sum += metrix[j][i]
    return sum
    
    

comb = list(combinations(range(N), N//2))

ans = 100

for i in range(math.comb(N,N//2)//2):
    team1 = comb[i]
    team2 = comb[-(i+1)]
    
    team1_score = cal_team(team1)
    team2_score = cal_team(team2)
    
    diff = abs(team1_score - team2_score)
    ans = min(ans, diff)
    
print(ans)
    