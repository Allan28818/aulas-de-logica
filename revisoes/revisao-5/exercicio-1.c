#include <stdio.h>

int main() {
  int a,b;

  puts("Digite o primeiro número");
  scanf("%d", &a);
  puts("Digite o segundo número");
  scanf("%d", &b);

  printf("Soma %d + %d = %d\n", a, b, a + b);
  printf("Subtração %d - %d = %d\n", a, b, a - b);
  printf("Divisão %d / %d = %d\n", a, b, a / b);
  printf("Multiplicação %d * %d = %d\n", a, b, a * b);


  return 0;
}