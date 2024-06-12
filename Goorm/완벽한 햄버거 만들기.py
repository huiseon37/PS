# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
buger_num = int(input())
ingredients = [int(num) for num in input().split(' ')]
max_ing = max(ingredients)
is_right = True

now = max_ing
for i in range(ingredients.index(max_ing)-1, -1, -1):
	if ingredients[i] > now:
		is_right = False
	now = ingredients[i]
	
now = max_ing
for i in range(ingredients.index(max_ing)+1, buger_num):
	if ingredients[i] > now:
		is_right = False
	now = ingredients[i]

print(sum(ingredients)) if is_right else print(0)