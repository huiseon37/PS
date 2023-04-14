function getDividedNumber(numer, denom) {
    let k = 2;
    let dividedNumer = numer;
    let dividedDenom = denom;
    
    while (k <= dividedNumer && k <= dividedDenom) {
        if(dividedNumer % k === 0 && dividedDenom % k === 0) {
            dividedNumer = dividedNumer/k;
            dividedDenom = dividedDenom/k;
        }
        else {
            k++;
        }
    }
    
    return [dividedNumer, dividedDenom];
}

function solution(numer1, denom1, numer2, denom2) {
    var answer = [];
    
    const numer = (numer1 * denom2) + (numer2 * denom1);
    const denom = denom1 * denom2;
    
    answer = getDividedNumber(numer, denom);
    
    
    return answer;
}

//어려움1. 약분을 어떻게 하지? -> 소인수 분해를 하자 -> 소인수 분해를 각각 동일하게 하면 된다!
//최소 공배수 활용