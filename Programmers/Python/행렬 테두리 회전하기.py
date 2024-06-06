def solution(rows, columns, queries):
    dx = [0, 1, 0, -1]
    dy = [1, 0, -1, 0]
    arr = [[(columns*i) + j for j in range(1, columns + 1)] for i in range(rows)]
    result = []

    for sx, sy, ex, ey in queries:
        d = 0
        px = sx - 1
        py = sy - 1
        moveNums = [arr[px][py]]
        for i in range((ex-sx+ey-sy)*2):
            if sx-1 <= px + dx[d] <= ex-1 and sy-1 <= py + dy[d] <= ey-1:
                px += dx[d] 
                py += dy[d]
            else:
                d = d + 1 if d < 5 else 0
                px += dx[d] 
                py += dy[d]
            moveNums.append(arr[px][py])
            arr[px][py] = moveNums[-2]
        result.append(min(moveNums))
            
    return result