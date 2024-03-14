#include <stdio.h>



int main(void) {
  int idade = 0;

  printf("Ano de nascimento %d \n", 2006);
  printf("Peso: %f \n", 45.0);
  printf("Peso %2.f \n", 45.0);
  printf("Gênero %c \n", 'F');
  printf("%s \n", "C developer");

  printf("Digite a sua idade. \n");
  scanf("%d", &idade);
  printf("Sua idade %d\n", idade);

  return 0;   
}