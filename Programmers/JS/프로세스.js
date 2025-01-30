function solution(priorities, location) {
    const process = priorities.map((priority,idx)=>[idx, priority]);
    const n = priorities.length;
    const finish = [];
    priorities.sort((a,b)=>a-b);
    
    while (finish.length !== n){
        const [idx, priority] = process.shift();
        const now = priorities.pop()
        
        if(priority === now){
            finish.push(idx);
        }else{
            process.push([idx, priority]);
            priorities.push(now)
        }
    }
    
    return finish.indexOf(location) + 1
}