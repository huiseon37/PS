function solution(emergency) {
    let order = 1;
    const answer = Array(emergency.length);
    
    for(let i=100; i>0; i--){
        if(emergency.includes(i)){
            answer[emergency.indexOf(i)] = order;
            order++;
        }    
    }
    
    return answer;
}