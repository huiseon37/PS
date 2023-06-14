function solution(my_str, n) {
    const myStrArr = my_str.split("");
    let strArr = [];
    while(myStrArr.length){
        strArr = [...strArr, myStrArr.splice(0,n).join("")];
    }
    
    return strArr;
}