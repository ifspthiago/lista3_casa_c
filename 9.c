#include <stdio.h>

int main() {
  int n1 = 1;
  do {
    if (n1 % 2 == 0) {
      printf("Par: %i\n", n1);
    } else {
      printf("Impar: %i\n", n1);
    }
    n1 += 1;
  } while (n1 <= 20);
  return 0;
}