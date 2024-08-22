#include <math.h>
#include <stdio.h>

int main() {
  char op;
  float a, b, result;

  while (1) {
    printf("Digite uma operação ou 'S' para sair: ");
    scanf(" %c", &op);

    if (op == 'S' || op == 's') {
      break;
    }

    if (op == '+' || op == '-' || op == '*' || op == '/' || op == '^') {
      printf("Digite o primeiro valor: ");
      scanf("%f", &a);
      printf("Digite o segundo valor: ");
      scanf("%f", &b);

      switch (op) {
      case '+':
        result = a + b;
        break;
      case '-':
        result = a - b;
        break;
      case '*':
        result = a * b;
        break;
      case '/':
        if (b != 0) {
          result = a / b;
        } else {
          printf("Erro, divisão por zero\n");
          continue;
        }
        break;
      case '^':
        result = pow(a, b);
        break;
      }

      printf("Resultado: %.2f\n", result);
    } else {
      printf("Operação inválida.\n");
    }
  }

  return 0;
}