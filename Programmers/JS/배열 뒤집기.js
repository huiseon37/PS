function solution(num_list) {
    let list = [];
    num_list.forEach((num)=>{
        list = [num, ...list];
    })
    return list;
}