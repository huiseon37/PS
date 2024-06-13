# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
n = int(input())
a = dict()
b = dict()
for num in map(int,input().split(' ')):
	a[num] = a[num] + 1 if num in a else 1
for num in map(int,input().split(' ')):
	b[num] = b[num] + 1 if num in b else 1
max_num = 0
ans_a = 0
ans_b = 0
key_a = sorted(a.keys())
key_b = sorted(b.keys())

for mouse in range(key_a[0],key_a[len(key_a)-1]+1): #10만번 반복
	x = mouse - 2
	y = mouse + 2
	cnt = 0
	for k in range(x, y+1):
		cnt += a.get(k,0)
	if cnt > max_num:
		ans_a = mouse
		max_num = cnt

max_num = 0

for mouse in range(key_b[0],key_b[len(key_b)-1]+1): #10만번 반복
	x = mouse - 2
	y = mouse + 2
	cnt = 0
	for k in range(x, y+1):
		cnt += b.get(k,0)
	if cnt > max_num:
		ans_b = mouse
		max_num = cnt

print(ans_a, ans_b)
print('good') if ans_a > ans_b else print('bad')