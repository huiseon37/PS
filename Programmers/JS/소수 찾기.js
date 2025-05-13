function findPrime(num){
    if(num == 0 || num == 1)    return false;
    if(num == 2)    return true;
    
    for(let i = 2; i <= Math.floor(Math.sqrt(num)); i++){
        if(num % i === 0)   return false;
    }
    
    return true;
}

function combination(arr, n){    
    const result = [];
    const queue = [];

    for(let i=0; i < arr.length; i++){
        queue.push({comb: [arr[i]], used: new Set([i])});
    }
    
    while(queue.length > 0){
        const {comb, used} = queue.shift();
        
        if(comb.length === n){
            result.push(parseInt(comb.join('')));
            continue;
        }
        
        for(let i = 0; i < arr.length; i++){
            if(!used.has(i)){
                queue.push({
                    comb: [...comb, arr[i]],
                    used: new Set([...used, i])
                })
            }
        }
    }
    
    return result;
}

function solution(numbers) {
    numbers = numbers.split('').map((num)=>parseInt(num));
    const numSet = new Set();
    
    for(let i=1; i <= numbers.length; i++){
        const result = combination(numbers, i);
        result.forEach((num)=>numSet.add(num));
    }
    
    const ans = [...numSet].filter((num)=>findPrime(num));

    return ans.length;
}