function solution(score) {
    const rank = Array(score.length);
    const average = Array.from(score, ([a,b],idx) => [(a+b)/2, idx]);
    
    average.sort(([a,],[b,])=> b-a);
    
    average.forEach(([aver, scoreIdx], idx)=>{
        if(idx > 0 && average[idx-1][0] === aver){
            rank[scoreIdx] = rank[average[idx-1][1]];
        }else{
            rank[scoreIdx] = idx+1;
        }
    })
    
    return rank
}