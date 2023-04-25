function solution(n) {
    let i = 1;
    
    while(true){
        if((i*n)%6 === 0){
            return (i*n)/6;
        }
        i++;
    }
}