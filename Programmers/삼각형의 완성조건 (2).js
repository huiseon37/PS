function solution(sides) {
    const sideSet = new Set();
    sides.sort((a,b)=>b-a);
    for(let i=1;i<=sides[0];i++){
        if(i+sides[1] > sides[0]){
            sideSet.add(i);
        }
    }
    for(let i=sides[0]+1; i < sides[0]+sides[1] ;i++){
        sideSet.add(i);
    }
    return [...sideSet].length;
}