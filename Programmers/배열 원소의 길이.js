function solution(strlist) {
    const answer = strlist.reduce((acc,cur)=>{
        const stringArr = Array.from(cur)
        return [...acc, stringArr.length]
    },[])
    return answer;
}