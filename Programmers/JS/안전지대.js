function solution(board) {
    var answer = 0;
    const n = board.length;
    let boomCnt = 0;
    const boomZone = [[-1,-1],[-1,0],[-1,1],[0,-1],[0,0],[0,1],[1,-1],[1,0],[1,1]];
    
    board.forEach((line, row)=>{
        line.forEach((el, col)=>{
            let isBoom = false;
            
            boomZone.forEach(([x, y])=>{
                if(row+x>=0 && row+x<n && col+y>=0 && col+y<n && board[row+x][col+y]){
                    isBoom = true;
                }
            })
            boomCnt = isBoom ? boomCnt + 1 : boomCnt; 
        })
    })
    
    answer = n*n - boomCnt;
    return answer;
}