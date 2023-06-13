function solution(array, n) {
    let cnt = 0;
    array.forEach((num)=>{
        cnt = num === n ? cnt+1 : cnt;
    })
    return cnt;
}