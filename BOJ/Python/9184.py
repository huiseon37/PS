from sys import stdin
import math

input = stdin.read().splitlines()

d = dict()


def w(a, b, c):
    num = (a, b, c)
    if a <= 0 or b <= 0 or c <= 0:
        d[num] = 1
        return 1
    if a > 20 or b > 20 or c > 20:
        return w(20, 20, 20)
    
    if num in d:
        return d[num]
    
    if a < b and b < c:
        n = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)
        d[num] = n
        return n
    else:
        n = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
        d[num] = n
        return n

for ip in input[:-1]:
    a, b, c = map(int, ip.split())
    print(f'w({a}, {b}, {c}) =', w(a, b, c))
    