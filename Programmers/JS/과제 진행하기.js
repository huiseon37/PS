//시작하기로 한 시각이 되면 시작
//새로운 과제 시작할 시간에 기존에 진행중이던 과제가 있다면 진행 중이던 과제를 멈추고 세로운 과제 시작
//진행중이던 과제를 끝냈을 때 멈춘 과제 이어 시작 (가장 최근에 멈춘 과제)

function solution(plans) {
    let newPlans = plans.map(([name,start,time])=>[ name,+start.split(':')[0]*60 + +start.split(':')[1], +time]);
    newPlans = newPlans.sort((a,b) => a[1] - b[1]);
    
    let finish = [];
    let stack = [];
    
    newPlans.slice(0, newPlans.length-1).forEach(([name, start, time], idx)=>{
        const [,nextStart,] = newPlans[idx+1];
        let haveTime = nextStart - start;
        let remainTime = time - haveTime;
        
        if(remainTime > 0){
            // 덜끝났을때
            stack.push([name, remainTime]);
        }
        else{
            // 다끝났을때
            finish.push(name);
            // 다끝났는데 시간 남았을때
            if(remainTime < 0 ){
                while(remainTime <= 0 && stack.length !==0){
                    const [n, t] = stack.pop()
                    haveTime = -remainTime;
                    remainTime = t - haveTime;
                    if (remainTime > 0){
                        stack.push([n,remainTime]);
                    }else{
                        finish.push(n);
                    }
                }
            }
        }
    });
    
    finish.push(newPlans.pop()[0]);
    while(stack.length !== 0){
        finish.push(stack.pop()[0]);
    }
    
    return finish;
}