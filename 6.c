#include <stdio.h>

int main() {

  int n1;
  for (n1 = 1; n1 <= 20; n1++) {
    if (n1 % 2 == 0) {
      printf("Par: %i\n", n1);
    } else {
      printf("Impar: %i\n", n1);
    }
  }
  return 0;
}
