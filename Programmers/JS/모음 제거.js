function solution(my_string) {
    const vowel = ['a', 'e', 'i', 'o', 'u'];
    const answer = Array.from(my_string).reduce((acc,cur)=>{
        return vowel.includes(cur) ? acc : [...acc, cur];    
    },[])
    
    return answer.join('');
}