#include <stdio.h>

int main() {
  for (int i = 2; i <= 7; i++) {
    long long factorial = 1;
    for (int j = 1; j <= i; j++) {
      factorial *= j;
    }
    printf("Factorial of %d = %lld\n", i, factorial);
  }
  return 0;
}
