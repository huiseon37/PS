function solution(s) {
    let strArr = Array.from(s);
    let newArr = [];
    strArr.forEach((el)=>{
        if(newArr.includes(el)){
            strArr = strArr.filter((char)=>char!==el);
        }else{
            newArr = [...newArr, el];
        }
    });
    return strArr.sort().join(''); 
}