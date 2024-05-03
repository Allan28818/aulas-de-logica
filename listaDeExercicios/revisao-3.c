#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. **Soma de elementos em um array**: dado o int array[5] =
// {1,2,3,4,5}, Escreva um programa que calcule a soma de todos
// os elementos em um array de inteiros.
void sumArrayValues() {
  int array[5] = {1,2,3,4,5};
  int sum = 0;

  system("cls");
  puts("Programa para realizar a soma dos elementos de um array");

  int i;
  for(i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
    sum += array[i];
  }

  printf("Soma: %d\n", sum);
}
// 2. **Média de elementos em um array**:dado o float array[] =
// {1.5, 2.5, 3.5, 4.5, 5.5} Escreva um programa que calcule a
// média dos elementos em um array de ponto flutuante.
void arrayFloatArrayAverage() {
  float array[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
  float sum = 0;
  int arraySize = sizeof(array) / sizeof(array[0]);

  puts("Programa para calcular a média de um array de floats");

  int i;

  for(i=0; i < arraySize; i++) {
    sum += array[i];
  }


  printf("Média: %.2f\n", sum / arraySize);
}
// 3. **Contagem de caracteres em uma string**:
// Escreva um programa que leia uma string do usuário e conte
// quantos caracteres a string possui, excluindo o caractere nulo
// de terminação '\0'. Em seguida, exiba o resultado.
void countStringSize() {
  char userResponse[30];
  system("cls");
  puts("Programa que conta a quantidade de caracteres de uma string.");
  puts("Digite algo...");

  scanf("%s", &userResponse);
  printf("Tamanho %d\n", strlen(userResponse));  
}

// 4. **Concatenação de strings**:
// Escreva um programa que leia duas strings do usuário e
// concatene-as em uma terceira string. Em seguida, exiba a
// string resultante.
void joinStrings() {
  char firstString[20];
  char secondString[20];

  system("cls");

  puts("Programa para concatenar strings");
  
  puts("Digite a primeira string...");
  scanf("%s", &firstString);

  system("cls");

  puts("Digite a segunda string...");
  scanf("%s", &secondString);

  system("cls");

  strcat(firstString, secondString);

  printf("Resultado: %s", firstString);

}
// 5. **Comparação de strings**:
// Escreva um programa que leia duas strings do usuário e
// compare-as para determinar se são iguais ou diferentes. Exiba
// o resultado da comparação.
void compareStrings() {
  char firstString[20];
  char secondString[20];
  
  system("cls");

  puts("Programa que compara duas strings");

  puts("Digite a primeira string...");
  fgets(firstString, 20, stdin);
  fflush(stdin);

  system("cls");

  puts("Digite a segunda string");
  fgets(secondString, 20, stdin);
  fflush(stdin);

  if(stcmp(firstString, secondString) == 0) {
    puts("Strings iguais");
  } else {
    puts("Strings diferentes");
  }
}

// 6. **Cópia de strings**:
// Escreva um programa que leia uma string do usuário e copie-
// a para outra string. Em seguida, exiba a string copiada.
// 7. **Inversão de uma string**:
// Escreva um programa que leia uma string do usuário e
// inverta os caracteres na string. Em seguida, exiba a string
// invertida.
// 8. **Contagem de ocorrências de uma letra em uma string**:
// Escreva um programa que leia uma string e uma letra do
// usuário e conte quantas vezes a letra aparece na string. Exiba
// o resultado.

int main() {
  int option;
  
  puts("Digite o número do programa que deseja executar.");
  puts("1) Soma dos elementos de um array");
  puts("2) Soma dos elementos de um array");
  puts("3) Soma dos elementos de um array");
  puts("4) Soma dos elementos de um array");
  puts("5) Soma dos elementos de um array");
  puts("6) Soma dos elementos de um array");
  puts("7) Soma dos elementos de um array");
  puts("8) Soma dos elementos de um array");
  scanf("%d", &option);

  switch (option)
  {
  case 1:
    sumArrayValues();
    break;
  case 2:
    arrayFloatArrayAverage();
    break;
  case 3:
    countStringSize();
    break;
  case 4:
    joinStrings();
    break;
  case 5:

    break;
  case 6:

    break;
  case 7:

    break;
  case 8:

    break;
  
  default:
    puts("Digite um número dentro da faixa de opções!");
    break;
  }

  return 0;
}