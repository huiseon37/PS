function bfs(graph, visit, start){
  const queue = [start];
  let head = 0;
  
  while(head < queue.length){
      const node = queue[head++];
      
      visit.add(node);
  
      for(const n of graph[node]){
          if(!visit.has(n)){
              queue.push(n);
          }
      }
  }
  
  return visit;
}

function solution(n, computers) {
  const graph = Array.from(Array(n), () => new Set());
  
  for(let i=0; i< n; i++){
      for(let j=0; j<n; j++){
          if(i == j)  continue;
          if(computers[i][j] == 1){
              graph[i].add(j);
              graph[j].add(i);
          }
      }
  }
  
  const visit = new Set();
  let answer = 0;
  for(let i = 0; i < n; i++){
      if(visit.has(i))    continue;
      
      bfs(graph, visit, i);
      
      answer += 1;
  }
  
  return answer;
}