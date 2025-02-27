from sys import stdin
import itertools
from collections import Counter

N = int(stdin.readline().strip())

ans = 0
step = 0
on = False

for i in range(N):
    if on:
        if str(ans+1).find('666') == -1 :
            ans = step*1000 + 666
            on = False
            step += 1
        else:
            ans += 1
    elif step % 10 != 6:
        ans = step*1000 + 666
        step += 1
    else:
        num = str(step*1000 + 666)
        num = num[0:num.index('666')+3] + '0' * len(num[num.index('666')+3:])
        ans = int(num)
        on = True
        step += 1
    
print(ans)