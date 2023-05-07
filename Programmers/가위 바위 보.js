function solution(rsp) {
    const rspArr = ["2", "0", "5"];
    const game = Array.from(rsp,(el)=>{
        return rspArr.indexOf(el)+1 > 2 ? rspArr[0]: rspArr[rspArr.indexOf(el)+1];
    })
    
    return game.join('');
}