function solution(s1, s2) {
    let cnt = 0;
    
    s1.forEach((el)=>{
       cnt = s2.includes(el) ? cnt+1 : cnt;
    });
    
    return cnt;
}