((n) => { (fib = (n) =>{ if(!fib.cache[n]){ fib.cache[n] = fib(n-1) + fib(n-2);} return fib.cache[n];}).cache = [0, 1, 1]; console.log(fib(n));})(50);
