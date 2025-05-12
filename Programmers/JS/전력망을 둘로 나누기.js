function bfs(graph, start){
    const queue = [];
    const visit = new Set();
    
    queue.push(start);
    visit.add(start);
    
    while(queue.length > 0){
        const node = queue.shift();
        
        for(const n of graph[node]){
            if(!visit.has(n)){
                queue.push(n);
                visit.add(n);
            }
        }
    }
    
    return [...visit].length;
}

function solution(n, wires) {
    const graph = {}
    
    for(let i=1; i<=n; i++){
        graph[i] = [];
    };
    
    wires.forEach(([s, e])=>{
        graph[s] = [...graph[s], e];
        graph[e] = [...graph[e], s];
    });
    
    let minDiff = n;
    wires.forEach(([s, e])=>{
        graph[s] = graph[s].filter((num) => num !== e);
        graph[e] = graph[e].filter((num) => num !== s);
        
        const count = new Set();
        
        for(let i=1; i<=n; i++){
            count.add(bfs(graph, i));
        }
        
        let diff = 0
        if([...count].length > 1){
            const [a, b] = [...count];
            diff = Math.abs(a-b);
        }
        
        minDiff = Math.min(minDiff, diff);
        
        graph[s] = [...graph[s], e];
        graph[e] = [...graph[e], s];
    })
    
    return minDiff;
}