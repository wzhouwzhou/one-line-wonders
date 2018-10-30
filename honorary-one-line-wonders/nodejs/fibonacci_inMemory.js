
// Memory efficent fibonacci computation. No memory stack, and array.length never gets larger than 3.
export const fib = n => n <= 0 ? 0 : n < 2 ? 1 : (a => { Array.from(Array(n), () => { a.push(a[0]+a[1]); a.shift(); }); return a.pop(); })([1,1]);
