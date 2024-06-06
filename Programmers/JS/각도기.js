function findAngle(angle, isSmall) {
    if(isSmall){
        return angle === 90 ? 2 : 1;
    }
    return angle === 180 ? 4 : 3;
}

function solution(angle) {
    return angle > 0 && angle <=90 ? findAngle(angle, true) : findAngle(angle, false);
}