def solution(n):
    arr = []
    
    while n > 0 :
        arr = [n % 3] + arr
        n = n//3
    
    return sum([n * (3**i) for i, n in enumerate(arr)])

# def solution(n):
#     s = ''
    
#     while n > 0 :
#         s += f'{n % 3}'
#         n = n//3
#     # int('문자열', x진법) -> x진법의 수를 10진법으로 변경 
#     return int(s,3)