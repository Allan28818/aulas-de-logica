#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char firstName[10];
  char lastName[10];

  puts("Digite o seu primeiro nome...");
  scanf("%9[^\n]s", firstName);
  fflush(stdin);

  puts("Digite o seu sobrenome...");
  scanf("%9[^\n]s", lastName);
  fflush(stdin);

  printf("Seu nome completo: %s %s", firstName, lastName);

  return 0;
}