#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <locale.h> 


int main() {
  
  setlocale(LC_ALL,"Portuguese");
  srand(time(NULL));
  char userName[50];
  int randomNumber = rand() % 10;
  int userSelectedNumber;

  printf("Qual seu nome?\n");
  scanf("%s", &userName);

  printf("Tente adivinhar o número de 0 até 10\n");
  scanf("%d", &userSelectedNumber);

  if(randomNumber == userSelectedNumber) {
    printf("Você %s acertou! O número é: %d\n", userName, randomNumber);
  } else {
    printf("Você %s errou! O número era: %d\n", userName, randomNumber);
  }

 
  return 0;
}

