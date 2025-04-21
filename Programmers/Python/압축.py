from collections import deque

def solution(msg):
    dictionary = dict({ 'A':1, 'B':2, 'C':3, 'D':4, 'E':5, 'F':6, 'G':7, 'H':8, 'I':9, 'J':10, 'K':11, 'L':12, 'M':13, 'N':14, 'O':15, 'P':16, 'Q':17, 'R':18, 'S':19, 'T':20, 'U':21, 'V':22, 'W':23, 'X':24, 'Y':25, 'Z':26 })
    word = ''
    step = 1
    num = 27
    ans = []
    l = len(msg)
    
    while True:
        if step > l:
            break
            
        now_word = msg[:step]
        if msg[:step] in set(dictionary.keys()):
            word = now_word
            step += 1
        else:
            ans.append(dictionary[word])
            dictionary[now_word] = num
            num += 1
            msg = msg[step-1:]
            step = 1
            
    ans.append(dictionary[word])

    return ans