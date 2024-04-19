#include <stdio.h>

// 1 - Soma de elementos em um vetor:
// Escreva um programa que calcula a soma de todos os
// elementos em um vetor.
void sumOfElements() {
  int array[3] = { 2, 3, 4 };
  int sum = 0;

  puts("Programa para calcular a soma de elementos de um array");

  int i;
  for(i=0; i < 3; i++) {
    sum += array[i];
  }

  printf("A soma dos temos é: %d\n", sum);
}

// 2 - Maior elemento em um vetor:
// Escreva um programa que encontre o
// maior elemento em um vetor.

void highestElementInArray() {
  int size = 4;
  int array[4];
  int highestNumber = 0;
  puts("Programa para encontrar o maior número em um array.");
  puts("Insira quatro números para o array");

  int i;
  for(i=0; i<size; i++) {
    puts("Insira um número.");
    scanf("%d", &array[i]);
  }  

  for(i=0; i<size; i++) {
    if(highestNumber < array[i]) {
      highestNumber = array[i];
    }
  }

  printf("Maior número %d\n", highestNumber);
}
// 3 - Média dos elementos em um vetor:
// Escreva um programa que calcule a média
// dos elementos em um vetor.
void arrayAverage() {  
  int array[4] = {1,2,3,4};
  float sum = 0;

  puts("Programa para calcular a média dos elementos de um array.");

  int i;
  for(i=0; i<4; i++) {
    sum += array[i];
  }

  printf("Média: %.2f", sum / 4);
}

// 4 - Inversão de vetor:
// Escreva um programa que inverta a
// ordem dos elementos em um vetor.
void invertArray() {
  int firstArray[4] = {1,2,3,4};
  int secondArray[4];
  int secondArrayPosition = 3;

  puts("Programa que inverte um array.");

  int i;
  for(i=0; i<4;i++) {
    secondArray[i] = firstArray[secondArrayPosition];

    secondArrayPosition -= 1;
  }

  printf("[ ");
  for(i=0; i<4; i++) {
    if(i == 3) {
      printf("%d ", secondArray[i]);
    } else {
      printf("%d, ", secondArray[i]);
    }
  }
  printf("]");
}


int main() {
  int option;

  printf("Digite uma opção para executar os programas.\n");
  printf("\t1) Soma dos elementos de um vetor\n");
  printf("\t2) Maior elemento de um vetor\n");
  printf("\t3) Média dos elementos de um vetor\n");
  printf("\t4) Inversão de vetor\n");

  scanf("%d", &option);

  switch (option)
  {
  case 1:
    sumOfElements();
    break;
  case 2:
    highestElementInArray();
    break;
  case 3:
    arrayAverage();
    break;
  case 4:
    invertArray();
    break;
  
  default:
    puts("Insira uma opção válida para executarmos um programa.");
    break;
  }
  return 0;
}