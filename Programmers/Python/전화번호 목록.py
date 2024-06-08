def solution(phone_book):
    sortedBook = sorted(phone_book)
    
    for i in range(len(sortedBook)-1):
        if sortedBook[i] == sortedBook[i+1][:len(sortedBook[i])]:
            return False
        
    return True