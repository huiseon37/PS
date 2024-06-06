function solution(s) {
    const stringArr = s.split(' ');
    let sum = 0;
          
    stringArr.forEach((el, idx)=>{
        if(el === 'Z'){
            sum -= Number(stringArr[idx-1]);
        }
        else{
            sum += Number(el)
        }
    })
    
    return sum;
}