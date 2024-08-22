#include <stdio.h>

int main() {
  int n, r;

  printf("Digite o valor para a tabuada: ");
  scanf("%d", &n);
  printf("Tabuada do %d\n", n);
  for (int tab = 0; tab <= 10; ++tab) {
    r = n * tab;
    printf("%d * %d = %d\n", n, tab, r);
  }

  return 0;
}