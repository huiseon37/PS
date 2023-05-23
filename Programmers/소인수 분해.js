function solution(n) {
    let i = 2;
    let numList = [];
    
    while(n !== 1){
        if(n % i === 0){
            n = n/i;
            numList = [...numList, i];
        }
        else{
            i++;
        }
    }
    
    return [... new Set(numList)];
}