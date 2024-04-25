#include <stdio.h>;
#include <string.h>

int main() {
  char name[10];
  char lastName[10];
  int nameSize = sizeof(name);
  int lastNameSize = sizeof(lastName);

  puts("Insira o seu nome");
  fgets(name, nameSize, stdin);
  fflush(stdin);

  name[strcspn(name, "\n")] = "\0";

  system("cls");
  printf("Bem vindo %s\n", name);
  
  puts("Digite o seu sobrenome");
  fgets(lastName, lastNameSize, stdin);
  fflush(stdin);

  lastName[strcspn(lastName, "\n")] = "\0";

  strcat(name, lastName);
  printf("Seu nome completo %s\n", name);

  printf("Tamanho %d\n", strlen(name));


  return 0;
}