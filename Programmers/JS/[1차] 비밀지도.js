function getMapLine(n, line) {
    let mapLine = [];
    for(let i=0;i<n;i++) {
        mapLine = [line % 2, ...mapLine];
        line = parseInt(line / 2);
    }
    return mapLine;
}

function getMap(arr, n) {
    let map = [];
    arr.forEach((line) => {
        map = [...map, getMapLine(n, line)];
    })
    return map
}

function solution(n, arr1, arr2) {
    const char = [" ", "#"];
    const map1 = getMap(arr1, n);
    const map2 = getMap(arr2, n);
    
    const answer = Array.from(Array(n),(_,idx)=>{
        let mapLine = [];
        map1[idx].forEach((el,elIdx)=>{
            const isWall = el || map2[idx][elIdx];
            mapLine = [...mapLine, char[isWall]]
        })
        
        return mapLine.join('');
    })
    
    return answer;
}