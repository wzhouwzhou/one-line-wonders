#include <stdio.h>

// To run, compile it with gcc and run the executable passing: ./a.out n, n being the number used in the fibonacci

int fib(int n) { return (n==0 || n==1) ? 1 : (fib(n-1) + fib(n-2)); }

int main(int argc, char *argv[]) {
  printf("Fibonacci: %d\n", fib((int) *argv[1] - '0'));
}
