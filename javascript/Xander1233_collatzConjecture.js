const collatz = x => x <= 1 ? x : collatz((x % 2) === 0 ? x / 2 : x * 3 + 1);
