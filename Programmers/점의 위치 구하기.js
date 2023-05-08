function solution(dot) {
    const x = dot[0];
    const y = dot[1];
    
    if(x > 0) {
        return y > 0 ? 1 : 4;
    }
    
    return y > 0 ? 2 : 3;
}