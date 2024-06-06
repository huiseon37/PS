function solution(num_list, n) {
    let newArr = [];
    
    for(let i=0; i<num_list.length; i += n ){
        let arr = [];
        for(let j=0; j<n ; j++){
            arr = [...arr, num_list[i+j]];
        }
        newArr = [...newArr, arr];
    }
    
    return newArr;
}