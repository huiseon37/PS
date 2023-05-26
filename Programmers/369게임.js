function solution(order) {
    let answer = 0;
    Array.from(order.toString()).forEach((el)=>{
        const num = Number(el);
        answer += num === 3 || num === 6 || num === 9 ? 1 : 0;
    })
    return answer;
}