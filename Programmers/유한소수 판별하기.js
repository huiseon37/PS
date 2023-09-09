function gcd(a, b){
    return a % b === 0 ? b : gcd(b, a%b);
}

function factor(denom) {
    while(denom % 2 === 0){
        denom = denom / 2;
    }
    while(denom % 5 === 0){
        denom = denom / 5;
    }
    return denom;
}

function solution(a, b) {
    const gcdNum = gcd(a,b);
    const denom = b / gcdNum;
    
    return factor(denom) === 1 ? 1 : 2;
}