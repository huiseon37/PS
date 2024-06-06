function solution(array) {
    const cntArr = Array.from(Array(1000),(_,idx) => [idx, 0]);
    
    array.forEach((num)=>{
        cntArr[num][1] += 1;
    })
    
    cntArr.sort((a,b)=>{
        return b[1] - a[1];
    })
    
    if(cntArr[0][1] === cntArr[1][1]){
        return -1;
    }
    
    return cntArr[0][0];
}