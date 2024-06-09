def solution(dirs):
    move = {'U': [0, 1], 'D': [0, -1], 'R': [1, 0], 'L': [-1, 0]}
    x, y = 0, 0
    load = set()
    
    for d in dirs:
        mx, my = move[d]
        if -6 < x + mx < 6 and -6 < y + my < 6:
            load.update([f'{x}{y}{mx+x}{my+y}',f'{mx+x}{my+y}{x}{y}'])
            x, y = mx+x, my+y
            
        
    return len(list(load))/2