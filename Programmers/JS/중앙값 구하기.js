function solution(array) {
    const mid = Math.floor(array.length/2);
    array.sort((a,b)=>{
        return a-b;
    });
    return array[mid];
}