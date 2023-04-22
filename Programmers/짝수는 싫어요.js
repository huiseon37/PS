function solution(n) {
    const arrSize = n%2 === 0 ? Math.floor(n/2) : Math.floor(n/2)+1
    let num = -1; 
    
    const arr = Array.from(Array(arrSize), ()=>{
        num = num + 2;
        return num;
    })
    
    return arr;
}