#include <stdio.h>
#include <string.h>

int main() {
  int number;

  puts("Programa para calcular o fatorial de um número");
  puts("Digite -1 para sair");

  char shouldRepeat[1];

  while(number != -1) {
    
    puts("Digite o seu número inteiro positivo");
    scanf("%d", &number);

    int factorial;

    if(number <= 0 && number != -1) {
      puts("Digite uma opção válida. Seu número de ser maior do que zero");
      continue;
    }

    if(number == -1) {
      break;
    }

    factorial = number;

    int i;
    for(i=number; i > 0; i--) {
      factorial *= i;
    }

    printf("Seu fatorial: %d\n", factorial);

    puts("Deseja continuar? (s) sim ou (n) não");
    scanf("%s", &shouldRepeat);

    if(strcmp(shouldRepeat, "n") == 0) {      
      number = -1;
    }
    // system("cls");
  }
  
  puts("Agradecemos por utilizar o nosso programa!");

  return 0;
}