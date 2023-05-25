function solution(array, n) {
    let answerIdx = 0;
    
    const distance = array.map((el)=>{
        return Math.abs(el-n);
    });
    
    distance.forEach((el, idx)=>{
        if(idx !== 0 ){
            if(distance[answerIdx] === el){
                answerIdx = array[answerIdx] > array[idx] ? idx : answerIdx;
            }
            else{
                answerIdx = distance[answerIdx] > el ? idx : answerIdx;
            }
        }
    })
    
    return array[answerIdx];
}