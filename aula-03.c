#include <stdio.h>
#include <string.h>

void add() {
  float firstNumber;
  float secondNumber;
  printf("Digite o primeiro número\n");
  scanf("%f", &firstNumber);
  printf(" Digite o segundo número\n");
  scanf("%f", &secondNumber);
  printf("Resultado: %.2f", firstNumber + secondNumber);
}
void sub() {
  float firstNumber;
  float secondNumber;
  printf("Digite o primeiro número\n");
  scanf("%f", &firstNumber);
  printf(" Digite o segundo número\n");
  scanf("%f", &secondNumber);
  printf("Resultado: %.2f", firstNumber - secondNumber);
}
void mult() {
  float firstNumber;
  float secondNumber;
  printf("Digite o primeiro número\n");
  scanf("%f", &firstNumber);
  printf(" Digite o segundo número\n");
  scanf("%f", &secondNumber);
  printf("Resultado: %.2f", firstNumber * secondNumber);
}
void division() {
  float firstNumber;
  float secondNumber;
  printf("Digite o primeiro número\n");
  scanf("%f", &firstNumber);
  printf(" Digite o segundo número\n");
  scanf("%f", &secondNumber);
  printf("Resultado: %.2f", firstNumber / secondNumber);
}
void rest() {
  int firstNumber;
  int secondNumber;
  printf("Digite o primeiro número\n");
  scanf("%f", &firstNumber);
  printf(" Digite o segundo número\n");
  scanf("%f", &secondNumber);
  printf("Resultado: %.2f", firstNumber % secondNumber);
}

void challenge() {
  float weight;
  int age;
  int birthdateYear;

  printf("Qual seu peso?\n");
  scanf("%f", &weight);
  printf("Qual sua idade?\n");
  scanf("%d", &age);
  printf("Qual o ano do seu nascimento?\n");
  scanf("%d", &birthdateYear);
  weight++;
  birthdateYear += 2;

  printf("Sua idade: %d;\n Seu peso somado com 1 %.3f;\n Seu ano de nascimento somado com 2 %d\n", age, weight, birthdateYear);
}

int main() {    
  char operation[1];
  
  printf("Qual operação matemática deseja fazer?\n");
  printf("A: adição;\n S: subtração;\n D: divisão;\n M: multiplicação\n R: resto \n\n");
  scanf("%s",&operation);

  printf(" Operation %s\n", operation);
  
  if(strcmp(operation, "A") == 0) {    
    add();
  } else if(strcmp(operation, "S") == 0) {
    sub();
  }
   else if(strcmp(operation, "D") == 0) {
    division();
  
  } else if(strcmp(operation, "M") == 0) {
    mult();
  } else if(strcmp(operation, "R") == 0) {
    rest();
  } else {
    printf("Operação inválida\n");
  }

  challenge();
  return 0;
}