function fibonacci(num) {
  return num < 2 ? num : fibo(num - 1) + fibo(num - 2);
}
