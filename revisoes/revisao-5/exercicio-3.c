#include <stdio.h>

int main() {
  int number;

  puts("Este programa identifica se o número é positivo, negativo ou neutro.");
  puts("Digite um número");
  scanf("%d", &number);

  if(number > 0 ) {
    puts("Número positivo");
  } else if(number < 0) {
    puts("Número negativo");
  } else {
    puts("Número neutro");
  }
  return 0;
}