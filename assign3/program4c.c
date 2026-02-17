#include <stdio.h>

int main() {
  for (int i = 1; i <= 4; i++) {
    for (char ch = 'A'; ch <= 'D'; ch++) {
      printf("%c", ch);
    }
    printf("\n");
  }
  return 0;
}
