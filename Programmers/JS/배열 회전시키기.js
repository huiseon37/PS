function solution(numbers, direction) {
    let result = [];
    const dirIdx = {"right": numbers.length - 1, "left": 0}
    const standardIdx = dirIdx[direction]
    numbers.forEach((el,idx)=>{
        if(idx !== standardIdx){
            result = [...result, el];
        }
    })
    
    result = dirIdx[direction] ? [numbers[standardIdx], ...result] : [...result, numbers[standardIdx]];
    
    return result;
}