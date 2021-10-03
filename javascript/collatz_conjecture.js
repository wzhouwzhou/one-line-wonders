const collatz = (x) => { if (x > 1) { return collatz((x % 2) === 0 ? x / 2 : x * 3 + 1) } else return x }
