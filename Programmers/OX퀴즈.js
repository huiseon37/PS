function solution(quiz) {
    return quiz.map((formula)=>{
        const [x, sign, y,,ans] = formula.split(" ")
        const expectedAns = sign === "+"? Number(x)+Number(y) : Number(x)-Number(y);
        return expectedAns === Number(ans) ? "O" : "X";
    });
}