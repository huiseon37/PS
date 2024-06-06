function solution(id_pw, db) {
    let answer = "fail";
    const [userId, userPw] = id_pw;
    
    db.forEach(([id, pw])=>{
        if(userId === id){
            answer = userPw === pw ? "login" : "wrong pw"; 
        }
    })
    
    return answer;
}