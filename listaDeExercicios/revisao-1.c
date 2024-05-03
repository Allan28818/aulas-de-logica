#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>
  




int main() {
  int questions = 7;
  int points = 0;

  char response[2]={""};
  
  setlocale(LC_ALL, "Portuguese");
  
  int i;
  for(i=1; i<=7;  i++) {
    switch (i)
    {
    printf("%d", i);
    case 1:
      // Questão 1
      printf("\nQuestão 1: Qual é a sintaxe correta para\ndeclarar uma variável inteira em C?\n");
      printf("a) int x;\n");
      printf("b) var x;\n");
      printf("c) integer x;\n");
      printf("d) número x;\n");

      fgets(response, 2, stdin);
      fflush(stdin);

      if(strcmp(response, "a") == 0) {
        puts("Acertou");
        points += 1;
      } else {
        puts("Errou");
      }
      puts("Resposta: a) int x;");
      sleep(3);      
      system("cls");
      break;
    case 2:
       // Questão 2
      printf("\nQuestão 2: Qual é a função usada para\nimprimir no console em C?\n");
      printf("a) print();\n");
      printf("b) console.log();\n");
      printf("c) printtext();\n");
      printf("d) printf();\n");


      fgets(response, 2, stdin);
      fflush(stdin);

      if(strcmp(response, "d") == 0) {
        puts("Acertou");
        points += 1;
      } else {
        puts("Errou");
      }
      puts("Resposta: d) printf();");      
      sleep(3);      
      system("cls");
      break;
    case 3:      
       // Questão 3
      printf("\nQuestão 3: O que o operador '==' faz em C?\n\n");
      printf("a) Atribui um valor a uma variável.\n");
      printf("b) Compara dois valores.\n");
      printf("c) Divide dois valores.\n");
      printf("d) Multiplica dois valores.\n");
      
      fgets(response, 2, stdin);
      fflush(stdin);

      if(strcmp(response, "b") == 0) {
        puts("Acertou");
        points += 1;
      } else {
        puts("Errou");
      }
      puts("Resposta: b) Compara dois valores.");      
      sleep(3);      
      system("cls");
      break;
    case 4:      
      // Questão 4
      printf("\nQuestão 4: Qual é o operador lógico para\n'OU' em C?\n");
      printf("a) &&\n");
      printf("b) ||\n");
      printf("c) !\n");
      printf("d) <>\n");

      fgets(response, 2, stdin);
      fflush(stdin);

      if(strcmp(response, "b") == 0) {
        puts("Acertou");
        points += 1;
      } else {
        puts("Errou");
      }
      puts("Resposta: b) ||");
      sleep(3);      
      system("cls");
      break;
    case 5:
      // Questão 5
      printf("\nQuestão 5: Qual é a estrutura de controle\nusada para repetição em C?\n");
      printf("a) if\n");
      printf("b) switch\n");
      printf("c) for\n");
      printf("d) else\n");


      fgets(response, 2, stdin);
      fflush(stdin);

      if(strcmp(response, "c") == 0) {
        puts("Acertou");
        points += 1;
      } else {
        puts("Errou");
      }
      
      puts("Resposta: c) for");
      
      sleep(3);      
      system("cls");
      break;
    case 6:
       // Questão 6
      printf("\nQuestão 6: Qual é a função usada para ler um\nnúmero inteiro do teclado em C?\n");
      printf("a) read_integer();\n");
      printf("b) input_int();\n");
      printf("c) scanf();\n");
      printf("d) get_int();\n");
      

      fgets(response, 2, stdin);
      fflush(stdin);

      if(strcmp(response, "c") == 0) {
        puts("Acertou");
        points += 1;
      } else {
        puts("Errou");
      }
      puts("Resposta: c) scanf();");      
      sleep(3);      
      system("cls");
      break;
    case 7:      
      // Questão 7
      printf("\nQuestão 7: Qual é o valor da\nexpressão 5 + 3 * 2 em C?\n");
      printf("a) 16\n");
      printf("b) 11\n");
      printf("c) 13\n");
      printf("d) 10\n");


      fgets(response, 2, stdin);
      fflush(stdin);

      if(strcmp(response, "b") == 0) {
        puts("Acertou");
        points += 1;
      } else {
        puts("Errou");
      }
      puts("Resposta: b) 11");            
      sleep(3);      
      system("cls");
      break;

    default:
      puts("Ocorreu um erro ao realizar o questionario!");
      break;
    }
  }
  
  printf("De 7 você acertou %d", points);
  return 0;
}