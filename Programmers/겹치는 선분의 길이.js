function solution(lines) {
    let answer = [];
    while(lines.length){
        const [x1,y1] = lines.shift();
        lines.forEach(([x2,y2])=>{
            const tmp = [Math.max(x1,x2), Math.min(y1,y2)];
            if(tmp[0] < tmp[1]){
                // answer.forEach((el)=>{
                //     if((el[0]<=tmp[0] && el[1]>=tmp[0]) || (el[0]<=tmp[1] && el[1]>=tmp[1])){
                //         answer = [...answer, ]
                //     }
                // })
                answer = [...answer, tmp];
            }
        })
    }
    
    if(!answer.length){
        return 0;
    }
    
    while(true){
        if(answer.length === 1){
            return answer[0][1] - answer[0][0];
        }
        const test1 = answer.shift();
        const test2 = answer.shift();
        answer = [...answer, [Math.min(test1[0], test2[0]), Math.max(test1[1], test2[1])]]
    }
}