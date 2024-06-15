n = int(input())
goorm = list(map(int, input().split(' ')))
user = list(map(int, input().split(' ')))
board = [input().split(' ') for _ in range(n)]

goorm = [goorm[0]-1, goorm[1]-1]
user = [user[0]-1, user[1]-1]

def game(player, board):
	commands = {'R': [0, 1], 'L': [0, -1], 'U': [-1, 0], 'D': [1, 0]}
	visit = [[0 for _ in range(n)] for _ in range(n)]
	cnt = 1
	
	visit[player[0]][player[1]] = 1
	while True:
		c = board[player[0]][player[1]]
		count = int(c[:-1])
		x, y = commands[c[-1:]]
		
		for _ in range(count):
			mx = (player[0] + x) % n
			my = (player[1] + y) % n
			
			if visit[mx][my] == 1:
				return cnt
			
			visit[mx][my] = 1
			player = [mx,my]
			cnt += 1

goorm_score = game(goorm, board)
use_score = game(user, board)

print(f'goorm {goorm_score}') if goorm_score > use_score else print(f'player {use_score}')