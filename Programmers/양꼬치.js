function solution(n, k) {
    const cost = n * 12000;
    k = k - Math.floor(n/10);
    return cost + 2000 * k;
}