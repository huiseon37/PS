function solution(keyinput, board) {
    const yDir = {"up":1, "down":-1};
    const xDir = {"left":-1, "right":1};
    let location = [0,0];
    
    keyinput.forEach((dir)=>{
        const xGuard = parseInt(board[0]/2);
        const yGuard = parseInt(board[1]/2);
        
        if(Object.keys(xDir).includes(dir)){
            location[0] += xDir[dir];
            if(Math.abs(location[0]) > xGuard){
                  location[0] -= xDir[dir];
            }
        }else{
            location[1] += yDir[dir];
            if(Math.abs(location[1]) > yGuard){
                  location[1] -= yDir[dir];
            }
        }
    })
    return location;
}