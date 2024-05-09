#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Operadores de entrada e saída de dados Escreva um programa que leia dois
// números inteiros e imprima a soma deles.
void sumNums() {
  int a;
  int b;
  
  system("cls");
  puts("Programa que realiza a soma de dois inteiros");
  puts("Digite o primeiro número");
  scanf("%d", &a);
  puts("Digite o segundo número");
  scanf("%d", &b);

  printf("Resultado: %d\n", a + b);

}

// Variáveis e Operadores aritméticos Crie um programa que calcule a média aritmética
// de três notas e determine se o aluno está aprovado (média >= 6).
void calculateAverage() {
  float firstGrade;
  float secondGrade;
  float thirdGrade;

  system("cls");
  puts("Programa que calcula a média de 3 números");
  puts("Digite a primeira nota");
  scanf("%f", &firstGrade);

  puts("Digite a segunda nota");
  scanf("%f", &secondGrade);

  puts("Digite a terceira nota");
  scanf("%f", &thirdGrade);

  system("cls");

  printf("Resultado: %.2f\n", (firstGrade + secondGrade + thirdGrade) / 3 );
}

// Switch case, While, do while, if, if else, For, Comando de controle de desvio e
// Vetores Desenvolva um programa que utilize um menu para realizar operações em um
// vetor de inteiros. As operações devem incluir inserção, remoção, exibição e busca de
// elementos.
void arrayOperations() {
  int array[10] = {1,2,3};
  int arrayItems = 3;

  int option;

  int i;

  int valueToSearch;
  int positionFound = -1;  
    
  system("cls");

  while(option != 0) {
    sleep(3);
    system("cls");
    puts("Programa para realizar operações em um vetor.");
    puts("Digite o que deseja fazer com o vetor:");
    puts("1) Adicionar item");
    puts("2) Remover item");
    puts("3) Exibir");
    puts("4) Encontrar elemento");
    scanf("%d", &option);

    switch (option) {
      case 1:      
      if(arrayItems < 10) {
        puts("Digite o valor que deseja inserir no vetor");
        scanf("%d", &array[arrayItems]);

        arrayItems += 1;
        puts("Item adicionado");
      } else {
        puts("Tamanho máximo atingido!");         
      }              
      break;
    case 2:
      if(arrayItems > 0) {
        for(i=0; i<arrayItems; i++) {
          printf("|%d|", array[i]);
        }
        puts("");
        puts("Digite o valor que deseja remover do array...");
        scanf("%d", &valueToSearch);

        for(i=0; i<arrayItems; i++) {
          if(array[i] == valueToSearch) {          
              positionFound = i;
          }
        }

        if(positionFound > -1) {
          for(i=positionFound; i < arrayItems -1; i++) {
            array[i] = array[i + 1];
          }

          arrayItems -= 1;
        }

        for(i=0; i<arrayItems; i++) {
          printf("|%d|", array[i]);
        }
      } else {
        puts("O array já está vazio!");
      }
      break;
    case 3:
      for(i=0; i<arrayItems; i++) {
        printf("|%d|", array[i]);
      }      
      break;
    case 4:
      
      puts("Digite o valor que deseja encontrar...");
      scanf("%d", &valueToSearch);

      for(i=0; i<arrayItems; i++) {
        if(array[i] == valueToSearch) {
          positionFound = i;      
        }
      }

      if(positionFound > -1) {
        printf("Valor %d encontrado na posição %d", valueToSearch, positionFound);
      } else {
        printf("%d não foi encontrado...");
      }            
      break;

    case 0:
      puts("Até a próxima!");
      break;
    default:
      puts("Insira uma opção válida para interar sobre o array!");
      break;
    }
  }
}

// Matrizes (Arrays Bidimensionais) Crie um programa que leia uma matriz quadrada de
// ordem n (onde n é lido pelo usuário) e calcule a soma dos elementos da diagonal
// principal.
void sumMatrixDiagonal() {
  int matrix[3][3];

  int i;
  int j;

  int sum = 0;

  system("cls");

  puts("Programa que calcula a soma da diagonal principal de uma matriz quadrada.");

  for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
      puts("Digite um número...");
      scanf("%d", &matrix[i][j]);      
    }
  }

  system("cls");

  for(i=0; i<3; i++) {          
      sum += matrix[i][i];      
      fflush(stdin);

      for(j=0; j<3; j++) {
          printf("|%d|", matrix[i][j]);    
      }
    puts("");
  }

  printf("Soma da diagonal principal: %d\n", sum);
}

// Strings e Funções de Biblioteca Implemente um programa que leia uma string (nome)
// e exiba o comprimento da string (número de caracteres).
void stringSize() {
  char string[100];

  system("cls");
  puts("Porgrama que calcula do tamanho de uma string");
  puts("Digite a string");
  scanf("%s", &string);
  fflush(stdin);

  printf("Tamanho: %d\n", strlen(string));
}

// Operadores de Entrada e Saída de Dados Escreva um programa que leia o nome e a
// idade de uma pessoa e depois imprima esses dados.
void readNameAndAge() {
  char name[50]={""};
  int age;

  system("cls");

  puts("Programa que lê o nome e a idade.");

  puts("Digite o nome...");
  scanf("%s", &name);
  
  puts("Digite a idade...");
  scanf("%d", &age);

  printf("Nome: %s\n Idade: %d", name, age);

}

// Variáveis e Operadores Aritméticos Crie um programa que leia dois números e
// imprima o resultado da multiplicação entre eles.
void multiply() {
  int a;
  int b;

  system("cls");
  puts("Programa que multiplica dois valores");

  puts("Digite o primeiro número");
  scanf("%d", &a);
  puts("Digite o segundo número");
  scanf("%d", &b);
  
  printf("Resultado: %d\n", a * b);
}

// Atribuições Aritméticas Escreva um programa que calcule o quadrado de um número
// usando atribuição aritmética.
void exponentiation() {
  int a;

  system("cls");
  puts("Programa que calcula o quadrado de um número");

  puts("Digite um número...");
  scanf("%d", &a);

  system("cls");

  a *= a;

  printf("Resultado: %d\n", a);
}

// Estruturas de Decisão e Operadores Lógicos Implemente um programa que
// determine se um ano é bissexto ou não.
void isLeapYear() {
  int year;

  system("cls");
  puts("Este programa calcula se um ano é bissexto ou não.");
  puts("Digite o ano.");
  scanf("%d", &year);

  if((year % 4) == 0 && (year % 100) != 0) {    
    puts("Ano bissexto");
  } else if(((year % 100) == 0) && ((year % 400) == 0)) {
    puts("Ano bissexto");    
  } else {
    puts("Ano não é bissexto");
  }
}

// Switch Case Desenvolva um programa que leia um número de 1 a 7 e imprima o dia
// da semana correspondente, sendo 1 para Domingo.
void weekDay() {
  int weekDay;

  system("cls");
  puts("Programa que identifica qual é o dia da semana");
  puts("Insira um número de 1 a 7...");
  scanf("%d", &weekDay);

  switch (weekDay)
  {
  case 1:
    puts("Domingo");
    break;
  case 2:
    puts("Segunda");
    break;
  case 3:
    puts("Terça");
    break;
  case 4:
    puts("Quarta");
    break;
  case 5:
    puts("Quinta");
    break;
  case 6:
    puts("Sexta");
    break;
  case 7:
    puts("Sábado");
    break;
  
  default:
    puts("Insira um número de 1 até 7!");
    break;
  }
}

// Escreva um programa que imprima todos os números pares de 0 até 100.
void evenNumbers() {
  int i = 0;

  puts("Programa que imprime números pares de 0 até 100");

  while(i <= 100) {
    if(i % 2 == 0) {
      if(i != 100) {
        printf("%d, ", i);
      } else {
        printf("%d", i);
      }
    }

    i++;
  }
}

// Do While. Implemente um programa que leia números do usuário até que ele digite 0, e
// então imprima a soma de todos os números digitados.
void sumNumbersSequence() {
  int sum = 0;
  int currentNumber;

  system("cls");

  puts("Programa que soma a sequência de número digitados. Para parar digite 0");

  do {
    puts("Digite um número...");
    scanf("%d", &currentNumber);

    sum += currentNumber;
    
    printf("Soma atual: %d\n", sum);
  } while (currentNumber != 0);
}

// For Crie um programa que leia um número inteiro e imprima a tabuada desse número.
void multiplicationTable() {
  int numberToMultiply;
  int i;
  
  system("cls");
  puts("Esse programa calcula a tabuada de qualquer inteiro começando de 1 e indo até 10");
  puts("Insira o inteiro");
  scanf("%d", &numberToMultiply);

  for(i = 1; i <= 10; i++) {
    printf("%d * %d = %d\n", numberToMultiply, i, numberToMultiply * i);
  }
}

// Comando de Controle de Desvio e Vetores Escreva um programa que preencha um
// vetor com 10 números inteiros e depois imprima apenas os números positivos.
void showPositiveValues() {
  int numbers[10];

  system("cls");
  puts("Programa que coleta 10 números e só exibe os positivios");

  int i;
  for(i=0; i<10; i++) {
    printf("Digite o valor %d\n", i+1);
    scanf("%d", &numbers[i]);
  }

  system("cls");
  printf("Resultado: ");
  for(i=0; i<10; i++) {
    int currentNumber = numbers[i];
    if(currentNumber >= 0) {
      printf("|%d|", numbers[i]);
    }
  }
}

// Manipulação de Strings Implemente um programa que leia uma frase (string) e conte
// quantas vogais (a, e, i, o, u) ela possui.
void countVowels() {
  char string[50];
  int vowelsAmount = 0;

  puts("Programa que conta a quantidade de vogais");
  puts("Digite algo...");
  scanf("%s", string);
  fflush(stdin);  


  int i;

  for (i = 0; i < strlen(string); i++) {
    if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
      string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {          
      vowelsAmount += 1;
    }
  }

  printf("%s possui %d vogais\n", string, vowelsAmount);
}

// Estruturas de decisão e Operadores lógicos Escreva um programa que leia um
// número e informe se ele é positivo, negativo ou zero.
void isPositiveNumber() {
  int number;
  
  system("cls");
  
  puts("Programa que identifica números positivos e negativos");
  puts("Digite um número...");
  scanf("%d", &number);

  if(number < 0 ) {
    puts("Número negativo");
  } else if(number == 0) {
    puts("Número nulo");
  } else {
    puts("Número positivo");
  }

}

int main() {
  int option;

  puts("Insira um número para selecionar o programa para rodar.");
  puts("1) Soma de dois números");
  puts("2) Cálculo de média das notas");
  puts("3) Operações em vetores");
  puts("4) Calcular soma das diagonais das matrizes");
  puts("5) Ler o comprimento de uma string");
  puts("6) Nome e idade");
  puts("7) Multiplicação de números");
  puts("8) Calcular o quadrado de um número");
  puts("9) Determinar de ano é bissexto ou não");
  puts("10) Definir dia da semana");
  puts("11) Números pares de 0 até 100");
  puts("12) Soma de sequência de números");
  puts("13) Tabuada do número");
  puts("14) Preencher e exibir números (positivos)");
  puts("15) Contagem de vogais");
  puts("16) Determinar se número é positivo ou negativo");

  scanf("%d", &option); 

  switch (option)
  {
  case 1:    
    sumNums();
    break;
  case 2: 
    calculateAverage();
    break;
  case 3: 
    arrayOperations();
    break;
  case 4: 
    sumMatrixDiagonal();
    break;
  case 5:    
    stringSize();
    break;
  case 6:    
    readNameAndAge();
    break;
  case 7:    
    multiply();
    break;
  case 8:
    exponentiation();
    break;
  case 9:    
    isLeapYear();
    break;
  case 10:    
    weekDay();
    break;
  case 11:    
    evenNumbers();
    break;
  case 12:    
    sumNumbersSequence();
    break;
  case 13:
    multiplicationTable();
    break;
  case 14:    
    showPositiveValues();
    break;
  case 15:    
    countVowels();
    break;
  case 16:    
    isPositiveNumber();
    break;
  
  default:
    puts("Insira uma opção válida para executar algum programa!");
    break;
  }
  return 0;
}