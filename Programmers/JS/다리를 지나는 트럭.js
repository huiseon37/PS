function solution(bridge_length, weight, truck_weights) {
    let answer = 1;
    const bridge = [{truckWeight: truck_weights.shift(), time: 1}];
    let bridgeWeight = bridge[0].truckWeight;
    
    while(bridge.length > 0 || truck_weights.length > 0){
        for(let i = 0; i < bridge.length; i++){
            bridge[i].time += 1;
        }
        
        const {truckWeight, time} = bridge[0];
        
        if (time > bridge_length){
            bridgeWeight -= truckWeight
            bridge.shift()
        }
        
        if (bridgeWeight + truck_weights[0] <= weight){
            const nextWeight = truck_weights.shift();
            bridge.push({truckWeight: nextWeight, time:1})
            bridgeWeight += nextWeight
        }
        
        answer++;
    }
    
    return answer;
}