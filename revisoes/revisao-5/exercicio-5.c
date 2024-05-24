#include <stdio.h>
#include <string.h>

#define SIZE 50

typedef struct {
  char name[SIZE];
  int age;
  float grade;
} StudentProps;



StudentProps createStudent() {
  StudentProps currentStudent;
  

  puts("Digite o nome do estudante...");
  scanf(" %s", currentStudent.name);
  fflush(stdin);
  puts("Digite a idade do estudante...");
  scanf("%d", &currentStudent.age);
  puts("Digite a nota do estudante...");
  scanf("%f", &currentStudent.grade);

  puts("_________________________");

  return currentStudent;
}

int main() {
  StudentProps students[3];

  int i;

  puts("Programa para cadastrar alunos");  

  for(i = 0; i < 3; i++) {      
    students[i] = createStudent();
  }

  system("cls");

  for(i = 0; i < 3; i++) {
    printf("Nome: %s\n", students[i].name);
    printf("Idade: %d\n", students[i].age);
    printf("Nota: %.2f\n", students[i].grade);
    if(i != 3) {
      puts("_______________________________");
    }
  }
}

