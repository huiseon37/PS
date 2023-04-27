function solution(my_string, n) {
    const answer = Array.from(my_string,(char)=>{
        let repeat = [];
        for(let i=0;i<n;i++){
            repeat = [...repeat, char];
        }
        return repeat.join('');
    })
    return answer.join('');
} 