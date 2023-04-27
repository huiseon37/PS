function solution(my_string) {
    let stringList = [];
    
    Array.from(my_string,(char)=>{
        stringList = [char, ...stringList];
    })
    
    return stringList.join('');
}