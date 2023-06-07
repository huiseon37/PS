function solution(n) {
    let cnt = 0;
    Array.from(n.toString()).forEach((el)=>{
        cnt += Number(el);
    })
    return cnt;
}