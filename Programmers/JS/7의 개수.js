function solution(array) {
    let cnt = 0;
    array.forEach((num)=>{
        while(num > 0){
            cnt = num % 10 === 7 ? cnt + 1 : cnt;
            num  = parseInt(num/10);
        }
    })
    return cnt;
}