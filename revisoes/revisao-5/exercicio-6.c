#include <stdio.h>

int main() {
  int numbers[10];
  int oddsAmount = 0;
  int evensAmount = 0;

  int i;
  for(i=0; i<10; i++) {
    printf("Digite o %dº número\n", i+1);
    scanf("%d", &numbers[i]);
  }

  for(i=0; i<10; i++) {    
    int currentNumber = numbers[i];

    if(currentNumber % 2 == 0) {
      evensAmount += 1;
      printf("%d é par\n", currentNumber);
    } else {
      oddsAmount += 1;
      printf("%d é ímpar\n", currentNumber);
    }
  }
  
  printf("\nQuantidade de números pares: %d\n Quantidade númeors ímpares: %d\n", evensAmount, oddsAmount);
  return 0;
}