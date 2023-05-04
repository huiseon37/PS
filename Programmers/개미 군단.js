function solution(hp) {
    let ant = 0;
    ant += Math.floor(hp/5);
    hp = hp%5;
    ant += Math.floor(hp/3);
    hp = hp%3;
    
    return ant + hp
}