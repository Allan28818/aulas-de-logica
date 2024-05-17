#include <stdio.h>


// 3. **Retornar o maior valor entre dois
// números:**
// Crie uma função que receba 2 números
// e retorne o maior valor.

int findHighestValue(int a, int b) {
  if(a > b) {
    return a;
  }

  return b;
}

int main() {
  int num1, num2;

  puts("Digite o valor 1");
  scanf("%d", &num1);
  puts("Digite o valor 2");
  scanf("%d", &num2);

  printf("O maior número é: %d", findHighestValue(num1, num2));

  return 0;
}