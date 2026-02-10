#include <stdio.h>
int main() {
  int fact;
  int c;
  printf("Enter the number you want factorial: ");
  scanf("%d", &fact);
  for (int i = 1; i <= fact; ++i) {
    c = fact * i;
  }
  printf("Factorial of %d is %d", fact, c);
  return 0;
}
