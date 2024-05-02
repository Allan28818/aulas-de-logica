#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  // Questão 1
  printf("\nQuestão 1: Qual é a sintaxe correta para\ndeclarar uma variável inteira em C?\n");
  printf("a) int x;\n");
  printf("b) var x;\n");
  printf("c) integer x;\n");
  printf("d) número x;\n");

  puts("Resposta: a) int x;");
  
  // Questão 2
  printf("\nQuestão 2: Qual é a função usada para\nimprimir no console em C?\n");
  printf("a) print();\n");
  printf("b) console.log();\n");
  printf("c) printtext();\n");
  printf("d) printf();\n");

  puts("Resposta: d) printf();");
  
  // Questão 3
  printf("\nQuestão 3: O que o operador '==' faz em C?\n\n");
  printf("a) Atribui um valor a uma variável.\n");
  printf("b) Compara dois valores.\n");
  printf("c) Divide dois valores.\n");
  printf("d) Multiplica dois valores.\n");
  
  puts("Resposta: b) Compara dois valores.");

  // Questão 4
  printf("\nQuestão 4: Qual é o operador lógico para\n'OU' em C?\n");
  printf("a) &&\n");
  printf("b) ||\n");
  printf("c) !\n");
  printf("d) <>\n");
  
  puts("Resposta: b) ||");

  // Questão 5
  printf("\nQuestão 5: Qual é a estrutura de controle\nusada para repetição em C?\n");
  printf("a) if\n");
  printf("b) switch\n");
  printf("c) for\n");
  printf("d) else\n");

  puts("Resposta: c) for");
  
  // Questão 6
  printf("\nQuestão 6: Qual é a função usada para ler um\nnúmero inteiro do teclado em C?\n");
  printf("a) read_integer();\n");
  printf("b) input_int();\n");
  printf("c) scanf();\n");
  printf("d) get_int();\n");
  
  puts("Resposta: c) scanf();");

  // Questão 7
  printf("\nQuestão 7: Qual é o valor da\nexpressão 5 + 3 * 2 em C?\n");
  printf("a) 16\n");
  printf("b) 11\n");
  printf("c) 13\n");
  printf("d) 10\n");

  puts("Resposta: b) 11");

  return 0;
}