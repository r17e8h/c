#include <math.h>
#include <stdio.h>

int main() {
  int num, originalNum, rem, result = 0, n = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  originalNum = num;

  while (originalNum != 0) {
    originalNum /= 10;
    n++;
  }

  originalNum = num;

  while (originalNum != 0) {
    rem = originalNum % 10;
    result += pow(rem, n);
    originalNum /= 10;
  }

  if (result == num)
    printf("%d is an Armstrong number", num);
  else
    printf("%d is not an Armstrong number", num);

  return 0;
}
