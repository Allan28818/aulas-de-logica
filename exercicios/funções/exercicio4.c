#include <stdio.h>


// 4. **Retornar o menor valor entre dois
// números:**
// Crie uma função que receba 2 números
// e retorne o menor valor.

int findLowestValue(int a, int b) {
  if(a < b) {
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

  printf("O menor número é: %d", findLowestValue(num1, num2));

  return 0;
}