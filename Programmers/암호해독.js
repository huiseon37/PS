function solution(cipher, code) {
    const realCipher = Array.from(cipher).reduce((acc,cur,idx)=>{
        return idx % code === code-1 ? [...acc, cur] : acc;
    },[])
    return realCipher.join('')
}