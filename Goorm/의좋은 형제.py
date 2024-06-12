# -*- coding: utf-8 -*-
# UTF-8 encoding when using korean
import math

user_input = input()
day = input()
food_amount = user_input.split(' ')
food_amount = [int(food_amount[0]), int(food_amount[1])]

for i in range(int(day)):
	order = i % 2
	give_food = math.ceil(food_amount[order] / 2)
	food_amount[order] -= give_food
	food_amount[(order+1)%2] += give_food
	
print(f'{food_amount[0]} {food_amount[1]}')