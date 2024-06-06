#include <stdio.h>

int findHighestValue(int a, int b, int c) {
  int highestValue = a;

  if(highestValue < b) {
    highestValue = b;
  }

  if(highestValue < c) {
    highestValue = c;
  }

  if(highestValue < a) {
    highestValue = a;
  }

  return highestValue;
}

int main() {
  int a, b, c;

  puts("Digite o valor 1");
  scanf("%d", &a);
  puts("Digite o valor 2");
  scanf("%d", &b);
  puts("Digite o valor 3");
  scanf("%d", &c);

  printf("%d é o maior valor", findHighestValue(a, b, c));

  return 0;
}