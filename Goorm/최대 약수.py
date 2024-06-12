# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
import math

a,b = input().split(' ')
a = int(a)
b = int(b)

if a != b :
	print(2)
else:
	for n in range(2,int(math.sqrt(a))+1):
		if a % n == 0 :
			print(n)
			exit()
	
	print(a)