#include <stdio.h>

int main() {
  int numbers[10];
  int highestNumber;
  int lowestNumber;

  int i;
  for(i=0; i<10; i++) {
    printf("Digite o %dº número\n", i+1);
    scanf("%d", &numbers[i]);
  }

  highestNumber = numbers[0];
  lowestNumber = numbers[0];

  for(i=0; i<10; i++) {
    int currentNumber = numbers[i];

    if(currentNumber > highestNumber) {
      highestNumber = currentNumber;
    }

    if(currentNumber < lowestNumber) {
      lowestNumber = currentNumber;
    }
  }

  printf("Maior número %d\n", highestNumber);
  printf("Menor número %d\n", lowestNumber);

  return 0;
}