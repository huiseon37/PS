function solution(numbers) {
    const size = numbers.length;
    numbers.sort((a,b)=> a-b);
    return numbers[size-1]*numbers[size-2];
}