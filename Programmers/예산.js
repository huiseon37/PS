function solution(d, budget) {
    let cnt = 0;
    d = d.sort((a,b) => a-b);
    
    d.forEach((cost)=>{
        if(budget - cost < 0) return;
        budget -= cost;
        cnt += 1;
    })
    return cnt; 
}