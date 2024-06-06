function findDec(sum) {
    let isDec = 1
    for(let i=2; i<sum; i++){
        if(sum % i === 0){
            isDec = 0;
        }
    }
    return isDec;
}

function solution(nums) {
    const size = nums.length;
    let cnt = 0;
    
    nums.forEach((el, idx)=>{
        for(let i=idx+1; i<size-1; i++){
            for(let j=i+1; j<size; j++){
                const sum = el+nums[i]+nums[j];
                cnt += findDec(sum);
            }
        }
    })
    
    return cnt;
}
