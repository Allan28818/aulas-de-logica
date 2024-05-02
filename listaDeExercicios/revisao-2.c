#include <stdio.h>

// 1. **Soma de Dois Números:**
// Escreva um programa que leia dois números inteiros e
// exiba a soma deles.
void sumNumbers() {
  int num1;
  int num2;
  puts("Programa para realizar a soma de dois números");
  puts("Digite o primeiro número");
  scanf("%d", &num1);

  system("cls");

  puts("Digite o segundo número");
  scanf("%d", &num2);

  system("cls");

  printf("Resultado: %d + %d = %d", num1, num2, num1 + num2);
}

// 2. **Média de Notas:**
// Crie um programa que leia as notas de um aluno em
// várias disciplinas (por exemplo, matemática, ciências,
// história) e calcule a média das notas.
void gradesAverage() {
  float mathGrade;
  float scienceGrade;
  float historyGrade;

  puts("Programa que calcula a média das notas das disciplinas de matemática, ciências e história");

  puts("Insira a nota de matemática");
  scanf("%f", &mathGrade);

  system("cls");
  
  puts("Insira a nota de ciências");
  scanf("%f", &scienceGrade);

  system("cls");
  
  puts("Insira a nota de história");
  scanf("%f", &historyGrade);

  system("cls");

  printf("Média das notas: %.2f\n", (mathGrade + scienceGrade + historyGrade) / 3);

}


// 3. **Média de Números em um Vetor:**
// Crie um programa que calcule a média dos números em um
// vetor de inteiros.
void arrayAverage() {
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  int arraySize = sizeof(array) / sizeof(array[0]);

  puts("Programa que calcula a média dos números em um array de inteiros");
  puts("Array:");

  int i;
  printf("[ ");
  for(i = 0; i < arraySize; i++) {
    if(i == arraySize -1) {
      printf("%d ", array[i]);
    } else {
      printf("%d, ", array[i]);
    }
  }
  printf("]");

}

// 4. **Contagem de Elementos Pares:**
// Implemente um programa que conte quantos números pares
// existem em um vetor de inteiros.
void evenNumberInArray() {
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  int arraySize = sizeof(array) / sizeof(array[0]);
  int evenNumbers = 0;

  puts("Programa que encontra os números pares em um array");

  int i;
  for(i = 0; i < arraySize; i++) {
    if(array[i] % 2 == 0) {
      printf("Par %d\n", array[i]);
      evenNumbers += 1;
    }
  }

  printf("Quantidade de números pares %d\n", evenNumbers);
}

// 5. **Soma dos Elementos:**
// Escreva um programa que calcule a soma de todos os
// elementos de um vetor de inteiros.
void sumOfArray() {
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  int arraySize = sizeof(array) / sizeof(array[0]);
  int sumOfValues = 0;

  puts("Programa que soma os itens de um array");

  int i;
  for(i = 0; i < arraySize; i++) {
    sumOfValues += array[i];
  }

  printf("Soma dos itens %d\n", sumOfValues);
}

// 6. **Produto de Números em um Vetor:**
// Implemente um programa que calcule o produto de todos
// os números em um vetor de inteiros.
void multiplicationOfArray() {
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  int arraySize = sizeof(array) / sizeof(array[0]);
  int multiplicationOfValues = 0;

  puts("Programa que multiplica todos os itens de um array");

  int i;
  for(i = 0; i < arraySize; i++) {    
    if(multiplicationOfValues == 0) {
      multiplicationOfValues = array[0];
    }
    multiplicationOfValues *= array[i];
  }

  printf("Multiplicação dos itens %d\n", multiplicationOfValues);
}

int main() {
  int userOption;

  puts("Selecione o programa que deseja rodar");
  puts("1) Soma de dois numeros");
  puts("2) Media de notas");
  puts("3) Media de numeros em um vetor");
  puts("4) Contagem de elementos pares");
  puts("5) Soma de elementos");
  puts("6) Produto de numeros em um vetor");

  scanf("%d", &userOption);

  switch (userOption) {
  case 1:    
    sumNumbers();
    break;
  case 2:    
    gradesAverage();
    break;
  case 3:    
    arrayAverage();
    break;
  case 4:    
    evenNumberInArray();
    break;
  case 5:    
    sumOfArray();
    break;
  case 6:    
    multiplicationOfArray();
    break;
  
  default:
    puts("Selecione uma opção válida para rodar o programa!");
    break;
  }

  return 0;
}