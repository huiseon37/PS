function solution(array, height) {
    let cnt = 0;
    array.forEach((h)=>{
        cnt = h > height ? cnt + 1 : cnt;
    })
    return cnt;
}