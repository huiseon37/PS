function solution(num_list) {
    const answer = num_list.reduce((acc, cur)=>{
        cur % 2 === 0 ? acc[0] += 1 : acc[1] += 1;
        return acc;
    },[0,0]);
    
    return answer;
}