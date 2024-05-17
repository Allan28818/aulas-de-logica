#include <stdio.h>

// 1. **Verificar se um valor é nulo:**
// Crie uma função que receba um valor e
// informe se ele é positivo ou não.

void checkPositiveNumber(int num) {
  if(num < 0) {
    printf("%d é negativo", num);
  } else if(num > 0) {
    printf("%d é positivo", num);
  } else {
    puts("O número é nulo");
  }
}

int main() {
  int num;

  puts("Digite um número");

  scanf("%d", &num);

  checkPositiveNumber(num);
  return 0;
}