# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
#해시 사용을 위해 파이썬 딕셔너리 이용
num = int(input())
num_arr = { n: 1 for n in input().split(' ')}
num2 = int(input())
answer_arr = input().split(' ')

for ans in answer_arr:
	print(num_arr.get(ans,0))