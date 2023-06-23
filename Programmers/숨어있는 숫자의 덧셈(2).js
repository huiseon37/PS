function solution(my_string) {
    const reg = /[a-zA-Z]/
    return my_string.split(reg).reduce((acc,cur)=>{
        return cur.length ? acc += Number(cur) : acc;
    },0)
}