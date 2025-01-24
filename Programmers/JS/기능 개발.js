function solution(progresses, speeds) {
    const finish = progresses.map((per,idx)=>Math.ceil((100 - per) / speeds[idx]));
    
    let publish = finish[0];
    let num = 1;
    const result = [];
    
    for(let i = 1; i<finish.length; i++){
        if(publish < finish[i]){
            result.push(num);
            publish = finish[i]
            num = 1;
        }
        else{
            num++;
        }
    }
    
    result.push(num)
    
    return result
}