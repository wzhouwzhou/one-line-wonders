#include <bits/stdc++.h>
using namespace std;

int main() {
  double factorial, e = factorial = 1.0;
  for(int i=1; i<10; i++){
    factorial*=i;
    e += 1.0 /factorial;
  }
}
