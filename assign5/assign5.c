#include <stdio.h>
int main() {
  int a, b, c = 0;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  c = a;
  a = b;
  b = c;
  printf("First number becomes %d and second number becomes %d\n", a, b);
  return 0;
}
