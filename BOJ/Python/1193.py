from sys import stdin

T = int(stdin.readline().strip())

k = 2

if T == 1:
    print('1/1')
    exit()

while True:
    if T <= k*(k+1)//2:
        break
    k += 1

max_num = k*(k+1)//2
a, b = k, 1

for i in range(max_num,max_num-k,-1):
    if i == T:
        print(f'{a}/{b}' if k % 2 == 0 else f'{b}/{a}')
        break
    a -= 1
    b += 1
        
    
