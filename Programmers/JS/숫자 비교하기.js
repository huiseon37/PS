function solution(num1, num2) {
    const isSame = {
        true: 1,
        false: -1
    };
    return isSame[num1===num2];
}