const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let input = [];

function solution(n) {
    for(let i=1; i<=n; i++){
        let star = [];
        for(let j=1; j<=i; j++){
            star = [...star, "*"];
        }
        console.log(star.join(''));
    }
}

rl.on('line', function (line) {
    input = line.split(' ');
}).on('close', function () {
    solution(Number(input));
});

