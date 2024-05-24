#include <stdio.h>
#include <string.h>

#define SIZE 50

typedef struct {
  char name[SIZE];
  int age;
  float salary;
} EmployeeProps;



EmployeeProps createEmployee() {
  EmployeeProps currentStudent;
  

  puts("Digite o nome do funcionário...");
  scanf(" %49[^\n]s", currentStudent.name);
  fflush(stdin);
  puts("Digite a idade do funcionário...");
  scanf("%d", &currentStudent.age);
  puts("Digite o salário do funcionário...");
  scanf("%f", &currentStudent.salary);

  puts("_________________________");

  return currentStudent;
}

int main() {
  EmployeeProps employees[3];

  int i;

  puts("Programa para cadastrar funcionários");  

  for(i = 0; i < 3; i++) {      
    employees[i] = createEmployee();
  }

  system("cls");

  for(i = 0; i < 3; i++) {
    printf("Nome: %s\n", employees[i].name);
    printf("Idade: %d\n", employees[i].age);
    printf("Salário: %.2f\n", employees[i].salary);
    if(i != 3) {
      puts("_______________________________");
    }
  }
}

