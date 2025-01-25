//n의 다음 큰 숫자는 n보다 큰 자연수
//n과 n의 다음 큰숫자는 2진수로 변환했을때 1의 갯수가 같다.
//n의 다음 큰 숫자는 앞의 조건을 만족하는 가장 작은 수

function solution(n) {
    let next = n+1;
    const cntOneN = n.toString(2).replaceAll('0','').length;
    
    while(true){
        const cntOneNext = next.toString(2).replaceAll('0','').length;
        if(cntOneN === cntOneNext){
            return next;
        }
        next++;
    }
}