from sys import stdin
import bisect

input = stdin.read().splitlines()

string = input[0]
arr = []

num = ''
for s in string:
    if s == '-' or s == '+':
        arr.append(int(num))
        arr.append(s)
        num = ''
    else:
        num += s
arr.append(int(num))

sum = 0
minus = False

for s in arr:
    if s == '-':
        minus = True
    elif s == '+':
        continue
    else:
        sum = sum - s if minus else sum + s

print(sum)