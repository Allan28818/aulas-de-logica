#include <stdio.h>
#include <math.h>

typedef struct BhaskarasProps {
  float x1;
  float x2;
  float delta;
} bhaskarasProps;

bhaskarasProps calculateBhaskara(float a, float b, float c) {
  bhaskarasProps bhaskaraReturningData;
  
  float delta = b*b - 4 * a * c;

  bhaskaraReturningData.delta = delta;
  bhaskaraReturningData.x1 = (-b + sqrt(delta)) / 2 * a;
  bhaskaraReturningData.x2 = (-b - sqrt(delta)) / 2 * a;

  return bhaskaraReturningData;
}

int main() {
  float a,b,c;

  puts("Calculadora da fórmula de Bhaskara");
  puts("Digite o valor de a");
  scanf("%f", &a);
  puts("Digite o valor de b");
  scanf("%f", &b);
  puts("Digite o valor de c");
  scanf("%f", &c);

  bhaskarasProps bhaskaraResponse = calculateBhaskara(a, b,c);

  printf("Valor de x1: %.2f\n", bhaskaraResponse.x1);
  printf("Valor de x2: %.2f\n", bhaskaraResponse.x2);
  printf("Valor de delta: %.2f\n", bhaskaraResponse.delta);

  return 0;
}