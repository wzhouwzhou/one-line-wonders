#include <stdio.h>

void fizzbuzz(int bound) {
  for (int i = 1; i <= bound; i++) !(i % 3) ? (!(i % 5) ? printf("fizzbuzz\n") : printf("fizz\n")) : (!(i % 5) ? printf("buzz\n") : printf(""));
}

int main() {
  fizzbuzz(55);
  return 0;
}
