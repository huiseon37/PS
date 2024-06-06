function solution(n) {
    let i = 1;
    let fact = 1;
    
    while(fact*i <= n){
        fact = fact * i;
        i++;
    }
    
    return i-1;
}