function solution(age) {
    const numToChar = ['a','b','c','d','e','f','g','h','i','j'];
    const answer = Array.from(age.toString(),(el)=> numToChar[Number(el)]);
    return answer.join('');
}