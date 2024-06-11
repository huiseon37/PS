def solution(food):
    answer = ''
    
    for i, num in enumerate(food[1:]):
        answer += f'{i+1}'*(num//2)
        
    return answer + "0" + answer[::-1]