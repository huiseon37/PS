function solution(num, total) {
    var answer = [];
    
    let pivotNum = parseInt(total / num);
    let depth = 1;
    
    answer = [...answer, pivotNum];
    
    while(answer.length < num){
        answer = [...answer, pivotNum + depth, pivotNum - depth]
        depth++;
    }
    
    answer.sort((a,b)=>{
        return a - b;
    });
    
    if(num % 2 === 0){
        answer = answer.slice(1,answer.length);
    }
    
    return answer;
}

// num개의 연속된 숫자로 total을 만든다면 num-1등분 하는게 아닐까?
// total을 num으로 나눈 몫이 기준점이 되고, 양 옆으로 +-1씩 줄여나가면 된다는 파훼법을 알았다.
// 짝수의 경우 맨끝에 +2짜리가 붙는다. 기준이 무조건 중간보다 작은수가 되기 때문에 (parseInt로 인해) 맨 끝에 큰수가 하나 더 붙는다.
