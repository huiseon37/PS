function solution(my_string) {
    const numArr = Array.from(my_string).reduce((acc,cur)=>{
        const num = Number(cur);
        return Number.isInteger(num) ? [...acc, num] : acc
    },[]);
    numArr.sort((a,b)=>a-b);
    return numArr;
}