n = int(input())
a, b = map(int, input().split(' '))

num_b = n//b
num_a = (n%b)//a


while num_b*b + num_a*a != n and num_b >=0:
	num_b -= 1
	num_a = (n-(num_b*b))//a


print(num_b+num_a) if num_b >=0 else print(-1)