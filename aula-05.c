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
  puts("7) Cáculo do IMC");   
  puts("8) Conversão da temperatura de Celcius para Farenheit");   
  puts("9) Contagem Regressiva");   
  puts("10) Tabuada");   
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
    calculateBMI();
    break;
  case 8:
    celciusToFarenheit();
    break;
  case 9: 
    countdown();
    break;
  case 10:
    multiplicationTable();
    break;
  default:
    puts("Programa selecionado não existe!");
    break;
  }


  return 0;
}

// 1. Positivo ou Negativo:
// Escreva um programa que leia um número inteiro do usuário e imprima se
// ele é positivo, negativo ou zero.

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

// 2. Par ou Ímpar:
// Crie um programa que leia um número inteiro do usuário e imprima se ele
// é par ou ímpar.
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

// 3. Ano Bissexto:
// Escreva um programa que verifique se um ano dado é bissexto ou não.
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

// 4. Máximo de Três Números:
// Leia três números inteiros do usuário e imprima o maior deles.
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

// 5. Calculadora de Notas:
// Peça ao usuário quantos alunos há na sala. Em seguida, através de um
// laço while, peça ao usuário para inserir as notas de todos os alunos da
// sala, um por vez. Por fim, o programa deve calcular e mostrar a média
// aritmética da turma.
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
 

// 6. Verificação de Triângulo:
// Solicite ao usuário os comprimentos dos três lados de um triângulo.
// Verifique se esses comprimentos formam um triângulo válido (ou seja, a
// soma de quaisquer dois lados deve ser maior que o terceiro lado).
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

// 7. Calculadora de IMC:
// Peça ao usuário seu peso (em kg) e altura (em metros). Calcule o Índice
// de Massa Corporal (IMC) e imprima a categoria correspondente (abaixo
// do peso, normal, sobrepeso, obeso).
void calculateBMI() {
  float height, weight;
  puts("Esse programa calcula o IMC");
  puts("Insira a altura em metros");
  scanf("%f", &height);
  puts("Insira o peso em quilos");
  scanf("%f", &weight);

  printf("IMC: %.2f\n", weight / (height * height));
}

// 8. Conversão de Temperatura:
// Leia uma temperatura em graus Celsius e converta-a para Fahrenheit
// usando a fórmula: F = (9/5) * C + 32 .
void celciusToFarenheit() {
  float temperatureInCelcius;
  puts("Esse programa converta uma temperatura em Celcius para Farenheit");
  puts("Insira a temperatura");
  scanf("%f", &temperatureInCelcius);
  printf("Temperatura em Farenheit: %.2f", (temperatureInCelcius * 1.8) + 32);
}


// 9. Contagem Regressiva:
// Peça ao usuário um número inteiro positivo e faça uma contagem
// regressiva a partir desse número até 1.
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

// 10. Tabuada:
// Solicite ao usuário um número inteiro e imprima a tabuada desse número
// de 1 a 10.
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