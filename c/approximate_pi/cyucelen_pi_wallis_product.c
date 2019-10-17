#include <stdio.h>
#include <math.h>

float pi_wallis_product(size_t iteration_count, size_t i, float pi) {
  return i < iteration_count ? pi_wallis_product(iteration_count, i + 1, pi * (1-(1/(pow(1+(2*i),2))))) : 4*pi;
}

int main() {
  printf("%.16lf\n",pi_wallis_product(100000, 1, 1));
  return 0;
}
