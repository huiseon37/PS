function solution(order) {
    const container = order.map((_,idx)=>idx+1);
    const subContainer = [];
    const truck = [];
    order = order.map((_,idx)=> order[order.length-idx-1])
    
    container.forEach((box)=>{
        if(box === order[order.length-1]){
            truck.push(order.pop());
            while(subContainer[subContainer.length-1] === order[order.length-1] && subContainer.length !== 0){
                truck.push(subContainer.pop());
                order.pop();
            }
        }else{
            subContainer.push(box);
        }
    })
    
    return truck.length
}