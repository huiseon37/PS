function getGradient(x1,y1,x2,y2) {
    return (y1-y2)/(x1-x2);
}

function solution(dots) {
    var answer = 0;
    const lines1 = [[0,1], [0,2], [0,3]];
    const lines2 = [[2,3], [1,3], [1,2]];
    
    lines1.forEach(([start1, end1], idx)=>{
        const [start2, end2] = lines2[idx];
        const gradient1 = getGradient(dots[start1][0], dots[start1][1], dots[end1][0], dots[end1][1]);
        const gradient2 = getGradient(dots[start2][0], dots[start2][1], dots[end2][0], dots[end2][1]);
        
        if(gradient1 === gradient2){
            answer = 1;
            return;
        }
    })
    
    return answer;
}