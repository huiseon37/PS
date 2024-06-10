def solution(s):
    answer = []
    
    for word in s.split(' '):
        arr = [w.upper() if i % 2 == 0 else w.lower() for i,w in enumerate(word)]
        answer.append(''.join(arr))
                
    return ' '.join(answer)