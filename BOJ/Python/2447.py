from sys import stdin 

input = stdin.read().splitlines()

N = int(input[0])
metrix = [ ['*'] * N for _ in range(0, N)]

def print_star(n, startn, startm):
    global metrix
    
    if n < 3:
        return 0
        
    next_n = n // 3
    
    for i in range(startn + next_n, startn + 2*next_n):
        for j in range(startm + next_n, startm + 2*next_n):
            metrix[i][j] = ' '
            
    for i in range(0,3):
        for j in range(0,3):
            print_star(next_n, startn + i*next_n, startm + j*next_n)
    
    
print_star(N, 0, 0)

for row in metrix:
    print(''.join(row))
    
    
    