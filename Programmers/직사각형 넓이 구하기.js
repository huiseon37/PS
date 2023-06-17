function solution(dots) {
    const [dot, ...restDots] = dots;
    const [a,b] = dot;
    let width = 0;
    let height = 0;
    restDots.forEach(([x,y])=>{
        if(a === x || b === y){
            width = Math.max(width, Math.abs(a-x));
            height = Math.max(height, Math.abs(b-y));
        }
    })
    return width*height
}