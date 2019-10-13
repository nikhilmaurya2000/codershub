let fib = [0, 1];
for (let i = fib.length; i < 10; i++) {
	fib[i] = fib[i - 2] + fib[i - 1];
}
console.log(fib); // [ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ]
