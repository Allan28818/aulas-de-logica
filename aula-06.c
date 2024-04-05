#include <stdio.h>

int main() {
  int shouldStop = 0;

  while(shouldStop == 0) {
    float number1, number2;
    int option;
    puts("Escolha qual operação deseja realizar");
    puts("\n 1) adição;\n 2) subtração;\n 3) multiplicação;\n 4) divisão.");
    puts("Pressione qualquer outra tecla para sair");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      puts("Adição");
      puts("Digite o primeiro número");
      scanf("%f", &number1);
      puts("Digite o segundo número");
      scanf("%f", &number2);
      printf("%.2f + %.2f = %.2f\n\n", number1, number2, number1 + number2);
      break;
    case 2:
      puts("Subtração");
      puts("Digite o primeiro número");
      scanf("%f", &number1);
      puts("Digite o segundo número");
      scanf("%f", &number2);
      printf("%.2f - %.2f = %.2f\n\n", number1, number2, number1 - number2);
      break;
    case 3:
      puts("Multiplicação");
      puts("Digite o primeiro número");
      scanf("%f", &number1);
      puts("Digite o segundo número");
      scanf("%f", &number2);
      printf("%.2f * %.2f = %.2f\n\n", number1, number2, number1 * number2);
      break;
    case 4:
      puts("Divisão");
      puts("Digite o primeiro número");
      scanf("%f", &number1);
      puts("Digite o segundo número");
      scanf("%f", &number2);
      printf("%.2f / %.2f = %.2f\n\n", number1, number2, number1 / number2);
      break;
    
    default:
      puts("Programa encerrado");
      shouldStop = 1;
      break;
    }

  }

  return 0;
}