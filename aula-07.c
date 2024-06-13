#include <stdio.h>
#include <math.h>

// 1 - Verificador de Números Primos: Crie um programa que determine se um número fornecido
// pelo usuário é primo ou não.
void primeNumbersChecker() {
  int number;
  int isPrimeNumber = 1;

  puts("Programa verificador de números primos.");
  puts("Digite o seu número");
  scanf("%d", &number);

  int i;

  for(i=0; i < number; i++) {    
    if(i > 1 && number % i == 0) {
      isPrimeNumber = 0;
      printf("Seu número é divisível por %d\n", i);
    }
  }

  if(isPrimeNumber == 1) {
    printf("O número %d é primo!\n", number);
  }
}

// 2 - Série de Fibonacci: Escreva um programa que gere os primeiros N termos da série de
// Fibonacci, onde N é fornecido pelo usuário.
void fibonacciGenerator() {
  int seriesNumber;
  double firstNumber = 1;
  double secondNumber = 1;

  puts("Programa que calcula N termos da sequência de Fibonacci.");
  puts("Insira a quantidade de séries que deseja visualizar...");
  scanf("%d", &seriesNumber);
  puts("_________________________");
  int i;

  int interactions = 0;
  for(i = 0; i < seriesNumber; i++) {
    if(i == 0) {
      interactions += 1;
      printf("%.0f\n", firstNumber);
    }     
    secondNumber = firstNumber + secondNumber;

    printf("%0.f + %.0f = %.0f\n", firstNumber, secondNumber - firstNumber, secondNumber);

    firstNumber = secondNumber - firstNumber;    
  }  
}

// 3 - Conversor de Temperatura: Crie um programa que converta a temperatura de Celsius para
// Fahrenheit ou vice-versa, dependendo da escolha do usuário.
void temperatureConverter() {
  char temperatureOption[1];
  float temperature;

  puts("Programa conversor de temperatura.");
  puts("Deseja converter a sua temperatura para qual unidade?");
  printf("(C) Celsius\t (F) Fahrenheit\n");

  scanf("%s", &temperatureOption);
  system("cls");

  if(strcmp(temperatureOption, "C") == 0) {
    puts("Digite a sua temperatura em Celsius para ser convertida para Fahrenheit.");
    scanf("%f", &temperature);

    printf("Temperatura em Fahrenheit: %.2f\n", (temperature * 1.8) + 32);
  } else if(strcmp(temperatureOption, "F") == 0) {
    puts("Digite a sua temperatura em Fahrenheit para ser convertida para Celsius.");
    scanf("%f", &temperature);

    printf("Temperatura em Celsius: %.2f\n", (temperature - 32) * 0.5555555555555556);
  } else {
    puts("As opções válida são F (Fahrenheit) e C (Celsius)");
  }
}

// 4 - Jogo de Adivinhação: Implemente um jogo de adivinhação onde o programa gera um número
// aleatório e o usuário tenta adivinhar. O programa deve dar dicas se o número fornecido pelo
// usuário é maior ou menor do que o número gerado.
void numberGame() {
  int number = rand() % 10;
  int userOption;

  puts("Este é um jogo para adivinhar um número.");

  while(number != userOption) {
    puts("Adivinhe o número entre 0 e 10");
    scanf("%d", &userOption);

    if(userOption > number) {
      puts("O número inserido é maior do que o número gerado. Continue tentando.");
    } else if (userOption < number){
      puts("O número inserido é menor do que o número gerado. Tente novamente.");
    } else {
      puts("Você acertou!!!");
    }
  }
}

// 5 - Média de Números: Escreva um programa que solicite ao usuário quantos números ele deseja
// inserir e depois calcule a média desses números.
void averageCalculator() {
  int amountOfNumbers;
  float sumOfNumbers = 0;
  
  puts("Programa calculadora de média.");
  puts("Digite a quantidade de números que deseja somar.");
  scanf("%d", &amountOfNumbers);

  int i = 0;

  while(i<amountOfNumbers) {
    float currentNumber;

    puts("Digite o número:");
    scanf("%f", &currentNumber);

    sumOfNumbers += currentNumber;
    i += 1;
  }

  printf("Resultado: %.2f\n", sumOfNumbers / amountOfNumbers);
}

// 6 - Contador de Dígitos: Crie um programa que conte o número de dígitos em um número inteiro
// fornecido pelo usuário.
void digitsCounter() {
  int number;
  char numberInString[50];

  puts("Programa para contar a quantidade de dígitos de um número.");
  puts("Digite o seu número.");

  scanf("%d", &number);
  
  itoa(number, numberInString, 10);

  printf("O número possui %d dígitos\n", strlen(numberInString));
}

// 7 - Calculadora de Potência: Peça ao usuário para inserir uma base e um expoente, e calcule a
// potência correspondente.
void exponentiationCalculator() {
  float base;
  float exponent;

  puts("Programa que calcula a potência de um número.");
  puts("Insira a base do número para calcular.");
  scanf("%f", &base);
  puts("Insira o expoente desse número.");
  scanf("%f", &exponent);

  printf("Resultado: %.2f\n", pow(base, exponent));
}

// 8 - Conversor de Moeda: Crie um programa que converta um valor em uma moeda para outra
// moeda, com base em taxas de conversão fornecidas pelo usuário.
void currencyConverter() {
  float tax;
  float valueToCalculate;

  puts("Programa para converter valores de moedas.");
  puts("Digite a quantidade que uma unidade da sua moeda corresponde na moeda que deseja converter.");
  scanf("%f", &tax);

  puts("Agora insira a quantidade da primeira moeda para convertermos para a segunda.");
  scanf("%f", &valueToCalculate);

  printf("Resultado: %.2f\n", valueToCalculate * tax);
}

// 9 - Cálculo de Média Ponderada: Solicite ao usuário que insira as notas e os pesos
// correspondentes, e então calcule a média ponderada.
void weightedAverageCalculator() {
  int amountOfNumbers;
  float sumOfNumbers = 0;

  puts("Programa para calcular médias podenradas de notas.");
  puts("Insira a quantidade de notas que deseja calcular.");
  scanf("%d", &amountOfNumbers);

  int i = 0;

  while(i<amountOfNumbers) {
    float grade;
    float weight;
    printf("________(%d)________\n", i+1);
    puts("Insira a nota atual.");
    scanf("%f", &grade);
    puts("Insira o peso atual.");
    scanf("%f", &weight);

    sumOfNumbers += grade * weight;
    
    i += 1;
  }

  printf("Resultado: %.2f", sumOfNumbers / amountOfNumbers);
}

int main() {
  int option;  

  printf("Selecione uma opção para rodar o programa...\n");
  printf("\t1) Verificador de números primos\n");
  printf("\t2) Série de Fibonacci\n");
  printf("\t3) Conversor de temperatura\n");
  printf("\t4) Jogo de adivinhação\n");
  printf("\t5) Média de números\n");
  printf("\t6) Contador de dígitos\n");
  printf("\t7) Calculadora de potência\n");
  printf("\t8) Conversor de moeda\n");
  printf("\t9) Cáculo de Média ponderada\n");

  scanf("%d", &option);
  system("cls");
  switch (option)
  {
  case 1:
    primeNumbersChecker();
    break;
  case 2:
    fibonacciGenerator();
    break;
  case 3:
    temperatureConverter();
    break;
  case 4:
    numberGame();
    break;
  case 5:
    averageCalculator();
    break;
  case 6:
    digitsCounter();
    break;
  case 7:
    exponentiationCalculator();
    break;
  case 8:
    currencyConverter();
    break;
  case 9:
    weightedAverageCalculator();
    break;
  default:
    puts("Insira um número válido para executarmos algum programa!");
    break;
  }
  return 0;
}