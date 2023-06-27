function solution(spell, dic) {
    let answer = 2;
    
    dic.forEach((word)=>{
        let isSpell = [];
        spell.forEach((char)=>{
            isSpell = [...isSpell, word.includes(char) ? true : false];
        })
        if(!isSpell.includes(false)){
            answer = 1;
            return;   
        }
    })
    
    return answer;
}