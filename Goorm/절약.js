function solution(n, arr){
	let money = 0;
	let result = 'success';
	
	arr.forEach((line)=>{
		const [type, num] = line.split(' ');
		type === 'in' ? money += +num : money -= +num;
		if(money < 0)	result = 'fail';
	})
	
	console.log(result);
}

const readline = require('readline');

(async () => {
	const input = [];
	let rl = readline.createInterface({ input: process.stdin });
	
	for await (const line of rl) {
		input.push(line);
		rl.close();
	}
	
	const n = parseInt(input[0]);
	const arr = input.slice(1);
	solution(n, arr);
	process.exit();
})();



