function solution(numbers) {
    let sum = 0
    
    numbers.forEach((el)=>{
        sum += el;
    })
    
    return sum/numbers.length;
}