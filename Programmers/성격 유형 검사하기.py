def solution(survey, choices):
    score = [3,2,1,0,1,2,3]
    scores = {'R':0, 'T':0, 'C':0, 'F':0, 'J':0, 'M':0, 'A':0, 'N':0}
    mbti = ""
    
    for cate, num in zip(survey, choices):
        if num < 4 :
            scores[cate[0]] += score[num-1]
        else:
            scores[cate[1]] += score[num-1]
    
    mbti += "R" if scores["R"] >= scores["T"] else "T"
    mbti += "C" if scores["C"] >= scores["F"] else "F"
    mbti += "J" if scores["J"] >= scores["M"] else "M"
    mbti += "A" if scores["A"] >= scores["N"] else "N"
        
        
    return mbti