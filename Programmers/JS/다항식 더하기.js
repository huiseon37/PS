function solution(polynomial) {
    const polyArr = polynomial.split(" + ");
    let polyNum = 0;
    let num = 0;
    let answer = [];
    
    polyArr.forEach((el)=>{
        if(el.includes("x")){
            polyNum = el[0] === "x" ? polyNum + 1 : polyNum + parseInt(el.slice(0,el.length-1));
        }
        else{
            num += parseInt(el);
        }
    });
    
    if(polyNum) {
        answer = [...answer, polyNum === 1? "x" : polyNum + "x"];
    }
    
    if(num) {
        answer = [...answer, num];
    }
    
    return answer.length === 1 ? answer.join('') : answer.join(" + ");
}