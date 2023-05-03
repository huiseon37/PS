function solution(n) {
    let cnt = 0;
    const nSqrt = Math.sqrt(n);
    
    for(let i=1; i <= Math.floor(nSqrt); i++){
        if(n%i === 0){
            cnt++;        
        }
    }
    
    return nSqrt > Math.floor(nSqrt)? cnt*2 : cnt*2-1;
}