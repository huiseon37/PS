function solution(num, k) {
    num = num.toString();
    return num.includes(k.toString()) ? num.indexOf(k.toString()) + 1 : -1;
}