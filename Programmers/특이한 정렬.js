function solution(numlist, n) {
    return numlist.sort((a,b)=>{
        const nToA = Math.abs(n-a);
        const nToB = Math.abs(n-b);
        
        if(nToA === nToB){
            return b - a;
        }
        
        return nToA - nToB
    })
}