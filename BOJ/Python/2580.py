from sys import stdin
from collections import deque

input = stdin.read().splitlines()

zero = []
metrix = []
rows = [set() for _ in range(9)]
cols = [set() for _ in range(9)]
boxs = [set() for _ in range(9)]

for i, row in enumerate(input):
    col_list = list(map(int,row.split()))
    metrix.append(col_list)
    for j, num in enumerate(col_list):
        if num == 0:
            zero.append((i, j))
        else:
            rows[i].add(num)
            cols[j].add(num)
            boxs[(i//3)*3 + j//3].add(num)

def is_posibble(row, col, num):
    global metrix
    
    if num in rows[row]:
        return False
    if num in cols[col]:
        return False
    if num in boxs[(row//3)*3 + (col//3)]:
        return False
    return True

def solve(n):
    global metrix

    if len(zero) == n:
        
        for row in metrix:
            print(*row)
        exit()
        
    row, col = zero[n]
    
    for num in range(1,10):
        if is_posibble(row, col, num):
            metrix[row][col] = num
            rows[row].add(num)
            cols[col].add(num)
            boxs[(row//3)*3 + col//3].add(num)
            solve(n+1)
            metrix[row][col] = 0
            rows[row].remove(num)
            cols[col].remove(num)
            boxs[(row//3)*3 + (col//3)].remove(num)

solve(0)