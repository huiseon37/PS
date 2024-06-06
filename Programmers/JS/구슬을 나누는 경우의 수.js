function solution(balls, share) {
    let cnt = 0;
    let numer = 1;
    let denom = 1;
    for(let i=balls; share!==cnt; i--){
        numer = numer*i;
        cnt++;
    }
    for(let i=share; i>0; i--){
        denom = denom*i;
    }
    
    return numer/denom;
}