function solution(input_string) {
    let nowWord = '';
    let answer = [];
    const stringArr = input_string.split("");
    const alphabet = [... new Set(input_string)];
    
    if(stringArr.length === alphabet.length) return "N";
    
    alphabet.forEach((el)=>{
        const start = stringArr.indexOf(el);
        const end = stringArr.lastIndexOf(el);
        //알파벳이 두개 이상이면
        if(start !== end){
            let isAlone = false;
            
            for(let i=start+1; i<end; i++){
                if(stringArr[i] !== el){
                    isAlone = true;
                } 
            }
            answer = isAlone ? [...answer, el] : answer;
        }
    })
    
    return answer.length ? answer.sort().join("") : "N";
    
}