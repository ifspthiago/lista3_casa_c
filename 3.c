#include <stdio.h>

int main() {
  int n = 1;
  while (n <= 20) {
    if (n % 2 == 0) {
      printf("Par: %i\n", n);
    } else {
      printf("Impar: %i\n", n);
    }
    ++n;
  }
  return 0;
}