function solution(my_string) {
    const answer = Array.from(my_string).map((el)=>{
        return el.charCodeAt() < 'a'.charCodeAt() ? el.toLowerCase() : el.toUpperCase();
    })
    return answer.join('');
}