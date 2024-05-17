#include <stdio.h>

// 5. **Retornar o maior valor entre 3
// números:**
// Crie uma função que receba 3 números
// e retorne o maior valor, utilizando a
// função da questão 4.

int findLowestValue(int a, int b, int c) {
  int lowestValue = a;

  if(lowestValue > b) {
    lowestValue = b;
  }

  if(lowestValue > c) {
    lowestValue = c;
  }

  if(lowestValue > a) {
    lowestValue = a;
  }

  return lowestValue;
}

int main() {
  int a, b, c;

  puts("Digite o valor 1");
  scanf("%d", &a);
  puts("Digite o valor 2");
  scanf("%d", &b);
  puts("Digite o valor 3");
  scanf("%d", &c);

  printf("%d é o menor valor", findLowestValue(a, b, c));

  return 0;
}