function solution(money) {
    const coffee = Math.floor(money/5500);
    
    money = money - 5500*coffee;
    
    return [coffee, money];
}