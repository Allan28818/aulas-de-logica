#include <stdio.h>

int main() {
  char name[50];
  float grade;

  printf("Digite o nome:\n");
  scanf("%s", &name);
  printf("Digite a nota:\n");
  scanf("%f", &grade);

  printf("Informações do aluno:\n");
  printf("Nome: %s\n", name);
  printf("Nota: %.1f\n", grade);

  if(grade > 7.0) {
    printf("Staus: APROVADO\n");
  } else {
    printf("Status: REPROVADO\n");
  }

  printf("(Nota maior que 7 - Aprovado; Nota menor que 7 - Reprovado)\n");

  
  return 0;
}