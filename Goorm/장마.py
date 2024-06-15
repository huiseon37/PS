# n개의 집, 장마에는 m일동안 비가 옴
# 비내리면 물의 높이가 1만큼 참
# 배수시스템은 장마가 시작된지 3의 배수가 되는 날마다 비가내리고 난 후 작동
# 작동날짜를 기준으로 2일 이내에 비가 내린 위치에서만 작동 1만큼 감소
# 장마 끝나고 물의 높이만큼 땅의 높이 증가. 땅 높이 구하시오
n, m = map(int,input().split(' '))
house = list(map(int,input().split(' ')))
rain = [list(map(int,input().split(' '))) for i in range(m)]

for day in range(1,m+1):
	#비가온다
	for r in range(rain[day-1][0],rain[day-1][1]+1):
		house[r-1] += 1
	
	#배수
	if day % 3 == 0 :
		drain = set()
		for r in range(day-3,day):
			for r in range(rain[r][0],rain[r][1]+1):
				drain.add(r)
		for h in list(drain):
			house[h-1] -= 1
			
print(' '.join(map(str,house)))