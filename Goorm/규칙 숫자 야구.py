num = list(map(int, input()))
ans = list(map(int, input()))
strike = [-1, -1, -1, -1]

cnt = 0

while ''.join(map(str,strike)) != ''.join(map(str,num)):
	is_ball = False
	for i, n in enumerate(ans):
		if n == num[i]:
			strike[i] = n

		elif n in num :
			is_ball = True

		else:
			n = (n + 1) % 10
			while n in ans:
				n = (n +1) % 10
			ans[i] = n
			
	if is_ball:
		strike_num = []
		for s in strike:
			if s != -1:
				ans.remove(s)
				
		ans = ans[-1:] + ans[:-1]
		
		for i, s in enumerate(strike):
			if s != -1:
				ans.insert(i, s)

	cnt += 1
	
print(cnt)
