function solution(lines) {
    let overlapLines = {};
    
    lines.forEach(([start,end])=>{
        for(let i= start; i < end; i++ ){
            const key = ''+i+(i+1);
            overlapLines[key] = overlapLines[key] ? overlapLines[key] + 1 : 1;
        }
    })
    
    let answer = 0;
    
    Object.values(overlapLines).forEach((val)=>{
        answer = val > 1 ? answer + 1 : answer; 
    })
    
    return answer;
}