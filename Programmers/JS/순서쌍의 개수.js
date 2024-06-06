function solution(n) {
    let cnt = 0;
    const nSqrt = Math.sqrt(n);
    
    for(let i=1; i <= Math.floor(nSqrt); i++){
        if(n%i === 0){
            cnt++;        
        }
    }
    
    return Number.isInteger(nSqrt)? cnt*2-1 : cnt*2;
}