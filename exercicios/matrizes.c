#include <stdio.h>
#include <stdlib.h>

// **Exercício 1:**
// Crie uma matriz 3x3 para armazenar números inteiros. Preencha
// a matriz com valores fornecidos pelo usuário e depois exiba a
// matriz na tela.
void fillMatrix() {
  int matrix[3][3];

  system("cls");

  puts("Programa que preenche uma matrix 3x3");

  int i;
  int k;
  for(i=0; i < 3; i++) {
    for(k=0; k < 3; k++) {
      printf("Digite um valor para a coluna %d e linha %d\n", i, k);
      scanf("%d", &matrix[i][k]);
    }
  }

  for(i=0; i < 3; i++) {
    for(k=0; k < 3; k++) {
      printf("|%d|", matrix[i][k]);
    }
    printf("\n");
  }
}

// **Exercício 2:**
// Crie duas matrizes 2x2 e realize a soma entre elas. Armazene o
// resultado em uma terceira matriz e exiba o resultado na tela.
void sumMatrixes() {
  int firstMatrix[2][2] = {{1,2}, {3,4}};
  int secondMatrix[2][2] = {{5,6}, {7,8}};
  int results[2][2];  

  puts("Programa que realiza a soma de duas matrizes");

  int i;
  int k;
  for(i=0; i<2; i++) {
    for(k=0; k<2; k++) {
      results[i][k] = firstMatrix[i][k] + secondMatrix[i][k];
    }
  }

  for(i=0; i<2; i++) {
    for(k=0; k<2; k++) {
      printf("|%d|",results[i][k]);
    }
    printf("\n");
  }
}

// **Exercício 3:**
// Crie uma matriz 4x4 e preencha-a com números aleatórios. Em
// seguida, calcule e imprima a soma de cada linha e de cada
// coluna.
void sumRandomMatrixes() {
  int matrix[4][4];
  int lineSum = 0;
  int columnSum = 0;

  system("cls");

  puts("Programa que soma matriz aleatória.");

  int i;
  int k;
  for(i = 0; i < 4; i++) {
    for(k = 0; k < 4; k++) {
      matrix[i][k] = rand() % 10;
    }
  }  

   for(i = 0; i < 4; i++) {
    for(k = 0; k < 4; k++) {
      printf("|%d|", matrix[i][k]);      
    }
    printf("\n");
  }
  

  for(i = 0; i < 4; i++) {
    for(k = 0; k < 4; k++) {
      lineSum += matrix[i][k];
      columnSum += matrix[k][i];

      printf("_____________________\n");
      printf("Soma linha %d\n", lineSum);
      printf("Soma coluna %d\n", columnSum);
      
    }
    printf("Soma da linha [%d]: %d\n", i + 1,  lineSum);
    printf("Soma da coluna [%d]: %d\n", i + 1, columnSum);

    lineSum = 0;
    columnSum = 0;
    printf("\n");
  }

  printf("\n");
}

// **Exercício 4:**
// Crie uma matriz 3x3 e realize a multiplicação de todos os seus
// elementos por um valor fornecido pelo usuário. Exiba a matriz
// resultante.
void multiplyMatrixByFactor() {
  int multiplicationFactor;
  int matrix[3][3];
  
  system("cls");
  puts("Programa que multiplica a matriz aleatória por um fator fornecido pelo usuário.");
  puts("Digite o fator para multiplicar a matriz");
  scanf("%d", &multiplicationFactor);

  system("cls");

  int i;
  int k;
  
  puts("Matriz original");
  for(i = 0; i < 3; i++) {
    for(k = 0; k < 3; k++) {
      matrix[i][k] = rand() % 10;
      printf("|%d|", matrix[i][k]);
    }
    printf("\n");
  }

  printf("\n\n");

  printf("Matriz multiplicada por %d\n", multiplicationFactor);

  for(i = 0; i < 3; i++) {
    for(k = 0; k < 3; k++) {
      matrix[i][k] = matrix[i][k] * multiplicationFactor;
      printf("|%d|", matrix[i][k]);
    }    
    printf("\n");
  }
}



int main() {
  int option;

  puts("Digite uma opção para começar:");
  puts("1) Preecher matriz 3x3");
  puts("2) Somar matrizes 2x2");
  puts("3) Somar matrizes 4x4 aleatórias");
  puts("4) Multiplicar valores de matriz 3x3");
  scanf("%d", &option);

  switch(option) {
    case 1: 
      fillMatrix();
      break;
    case 2: 
      sumMatrixes();
      break;
    case 3: 
      sumRandomMatrixes();
      break;
    case 4: 
      multiplyMatrixByFactor();
      break;
    default:
      puts("Insira uma opção válida para executar os programas disponíveis.");
  }
}