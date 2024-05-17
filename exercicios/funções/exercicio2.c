#include <stdio.h>

// 2. **Equação do segundo grau:**
// Crie uma função que receba três
// valores, 'a', 'b' e 'c', que são os
// coeficientes de uma equação do segundo
// grau, e retorne o valor do delta, dado por
// Delta = b^2 - 4ac.
// float calculateDelta(float a, float b, float c) {
//   return b * b - 4 *a*c;
// }
float calculateDelta(float a, float b, float c) {
  return b * b - 4*a*c;
}


int main() {
  float a,b,c;

  puts("Função para calcular delta");
  puts("Digite o valor de a");
  scanf("%f", &a);
  puts("Digite o valor de b");
  scanf("%f", &b);
  puts("Digite o valor de c");
  scanf("%f", &c);

  printf("O valor de delta é: %.2f", calculateDelta(a,b,c));

  return 0;
}