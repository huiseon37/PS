def game(m, n, board):
    delete = []
    
    for i in range(m-1):
        for j in range(n-1):
            if board[i][j] == board[i][j+1] and board[i][j] != 0:
                if board[i][j] == board[i+1][j] and board[i+1][j] == board[i+1][j+1]:
                    delete += [[i,j], [i,j+1], [i+1,j], [i+1,j+1]]

    for x, y in delete:
        board[x][y] = 0

    for i in range(m-1, 0, -1):
        for j in range(n):
            if board[i][j] == 0:
                mi = i
                while board[mi][j] == 0 and mi > 0:
                    mi -= 1
                board[i][j] = board[mi][j]
                board[mi][j] = 0
    
    return (len(delete), board)

def solution(m, n, board):
    board = [list(row) for row in board]
    
    while True:
        isEnd, board = game(m, n, board)
        if isEnd == 0:
            cnt = 0
            for row in board:
                cnt += row.count(0)
            return cnt