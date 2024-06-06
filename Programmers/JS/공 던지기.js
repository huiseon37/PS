function solution(numbers, k) {
    const order = 2*k - 1
    let index = order % numbers.length - 1
    if(index === -1 ) {
        index += numbers.length
    }
    return numbers[index]
}