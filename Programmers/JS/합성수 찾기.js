function findPrime(num) {
    for(let i=2; i<num; i++){
        if(num%i === 0){
            return 1;
        }
    }
    return 0;
}

function solution(n) {
    let answer = 0;
    for(let i=1; i<=n ; i++){
        answer += findPrime(i); 
    }
    
    return answer;
}