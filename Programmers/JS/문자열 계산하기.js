function solution(my_string) {
    const stringArr = my_string.split(" ");
    let answer = Number(stringArr.shift());
    let sign = 0
    while(stringArr.length){
        let item = stringArr.shift();
        if(sign){
            item = sign === "+" ? Number(item) : -Number(item);
            answer += item;
            sign = 0;
        }
        else{
            sign = item;
        }
    }
    return answer;
}