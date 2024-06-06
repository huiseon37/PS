function solution(babbling) {
    var answer = 0;
    const ableBabbling = ["aya","ye","woo","ma"];
    
    babbling.forEach((word)=>{
        let idx = 0;
        
        while(idx < 4) {
            if(word.indexOf(ableBabbling[idx]) === 0){
                word = word.substr(ableBabbling[idx].length);
                idx = 0;
            }else{
                idx++;
            }
        }
        if(!word.length) {
            answer++;
        }
    })
    
    return answer;
}