function solution(my_string, letter) {
    const answer = Array.from(my_string).reduce((acc, cur)=>{
        return cur === letter ? acc : [...acc, cur];
    },[]);
    return answer.join('');
}