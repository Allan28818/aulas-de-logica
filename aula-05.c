#include <stdio.h>

int main() {
  int option;

  puts("Selecione uma opção de programa para executar");
  puts("1) Positivo ou negativo");
  puts("2) Par ou ímpar");
  puts("3) Ano bissexto ou não");
  puts("4) Maior número da lista");
  puts("5) Calcular média");
  puts("6) Verificar os lados de um triângulo");  
  puts("7) Contagem regressiva");  
  puts("8) Tabuada");  
  scanf("%d", &option);
  

  switch (option) {
  case 1:
    isPositiveOrNegative();
    break;
  case 2:
    isEvenOrOdd();
    break;
  case 3:
    isLeapYear();
    break;
  case 4:
    findHighestNumber();
    break;
  case 5:
    calculateAverage();
    break;
  case 6:
    checkTriangleSides();
    break;
  case 7:
    countdown();
    break;
  case 8:
    multiplicationTable();
    break;
  default:
    puts("Programa selecionado não existe!");
    break;
  }


  return 0;
}

void isPositiveOrNegative() {
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
}

void isEvenOrOdd() {
  int number;

  puts("Este programa identifica se o número é ímpar ou par.");
  puts("Digite um número");
  scanf("%d", &number);

  if((number % 2) == 0) {
    puts("Número par");
  } else {
    puts("Número ímpar"); 
  }
}


void isLeapYear() {
  int year;

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

void findHighestNumber() {
  int numbers[4] = {};
  int firstNumber;
  int secondNumber;
  int thirdNumber;

  int highestNumber;

  puts("Este programa pega três números e seleciona o maior");
  puts("Digite o primeiro número");
  scanf("%d", &firstNumber);
  puts("Digite o segundo número");
  scanf("%d", &secondNumber);
  puts("Digite o terceiro número");
  scanf("%d", &thirdNumber);

  numbers[0] = firstNumber;
  numbers[1] = secondNumber;
  numbers[2] = thirdNumber;

  highestNumber = firstNumber;

  int i;
  for(i = 0; i < 3; i++){
    if(highestNumber < numbers[i]) {
      highestNumber = numbers[i];
    }
  }
  printf("Maior número %d", highestNumber);
}

void calculateAverage() {
  int amountOfStudents;
  int i = 1;
  float sumOfGrades = 0;
  puts("Este programa calcula a média aritmética de todos alunos de uma sala.");
  puts("Digite a quantidade de alunos da sua sala");
  scanf("%d", &amountOfStudents);

  while(i <= amountOfStudents) {
    float currentGrade;
    printf("Insira a nota %d\n", i);
    scanf("%f", &currentGrade);    
    sumOfGrades += currentGrade;
    i += 1;
  }

  
  printf("A média dos alunos é %.2f\n", sumOfGrades / amountOfStudents);
}
 

void checkTriangleSides() {
  float side1, side2, side3;
  puts("Esse programa verifica se o triângulo é válido");
  puts("Insira o tamanho do primeiro lado");
  scanf("%f", &side1);
  puts("Insira o tamanho do segundo lado");
  scanf("%f", &side2);
  puts("Insira o tamanho do terceiro lado");
  scanf("%f", &side3);

  if(side1 + side2 < side3) {
    puts("Triângulo inválido");
  } else if(side2 + side3 < side1) {
    puts("Triângulo inválido");
  } else if(side1 + side3 < side2) {
    puts("Triângulo inválido");
  } else {
    puts("Triângulo válido");
  }
}

void countdown() {
  int counter;
  int i;
  puts("Esse programa realiza a contagem regressiva até o 1");
  puts("Escreva o número que deseja começar");
  scanf("%d", &counter);
  puts("-----------------");
  i = counter;

  while(i > 0) {
    printf("%d\n", i);
    i--;
  }
}

void multiplicationTable() {
  int numberToMultiply;
  int i;
  puts("Esse programa calcula a tabuada de qualquer inteiro de 1 até 10");
  puts("Insira o inteiro");
  scanf("%d", &numberToMultiply);

  for(i = 1; i <= 10; i++) {
    printf("%d * %d = %d\n", numberToMultiply, i, numberToMultiply * i);
  }
}