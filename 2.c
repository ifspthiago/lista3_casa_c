#include <stdio.h>

int main() {
  int n = 1;
  while (n <= 20) {
    if (n % 2 == 0) {
      printf("= %i\n", n);
    }
    ++n;
  }
  return 0;
}