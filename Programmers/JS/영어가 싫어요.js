function solution(numbers) {
    const numberList = {
        'zero': 0, 
        'one': 1, 
        'two': 2, 
        'three': 3, 
        'four': 4, 
        'five': 5, 
        'six': 6, 
        'seven': 7, 
        'eight': 8, 
        'nine':9,
    };
    let stringToNum = '';
    let numStr = '';
    
    Array.from(numbers).forEach((el)=>{
        numStr += el;
        if(Object.keys(numberList).includes(numStr)){
            stringToNum += numberList[numStr];
            numStr = '';
        }
    });
    
    return Number(stringToNum);
}