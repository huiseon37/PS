from sys import stdin
import math

input = stdin.read().splitlines()

N = int(input[0])
A = list(map(int, input[1].split()))
dp_inc = [0] * N
dp_dec = [0] * N

if N == 1:
    print(1)
    exit()
if N == 2 :
    print(2)
    exit()
    
dp_inc[0] = 1
dp_dec[0] = 1

for i in range(0, N):
    num = A[i]
    max_sum = 1
    for j in range(i):
        if A[j] < num:
            max_sum = max(max_sum, dp_inc[j]+1)
    dp_inc[i] = max_sum

for i in range(N-1, -1, -1):
    num = A[i]
    max_sum = 1
    for j in range(N-1, i, -1):
        if A[j] < num:
            max_sum = max(max_sum, dp_dec[j]+1)
    dp_dec[i] = max_sum
   
dp = [] 
for i in range(N):
    dp.append(dp_inc[i]+dp_dec[i])

print(max(dp)-1)

