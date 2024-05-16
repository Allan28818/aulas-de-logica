#include <stdio.h>

//   1. **Cadastro de Alunos:**
// Crie uma estrutura `Aluno` com campos como nome, idade, matrícula, e média.
// Em seguida, crie um programa que permita ao usuário cadastrar informações de
// vários alunos e depois imprima essas informações na tela.

struct StudentProps {
  char name[50];
  int age;
  int registration;
  float average;
};

typedef struct StudentProps studentProps;


void registerStudents() {
  int size = 2;
  studentProps student[size];
  
  system("cls");
  puts("Programa para cadastrar estudantes");

  int i;
  for(i =0; i < size; i++) {
    puts("Insira o nome do aluno");
    scanf(" %49[^\n]s", student[i].name);    
    puts("Insira a média do aluno");
    scanf(" %f", &student[i].average);    

    puts("Insira a idade do aluno");
    scanf(" %d", &student[i].age);    
    
    puts("Insira a matrícula do aluno");
    scanf(" %d", &student[i].registration);    
    
    puts("____________________");
    
    system("cls");
  }

  for(i = 0; i<size; i++) {
    printf("Nome: %s\n", student[i].name);
    printf("Idade: %d\n", student[i].age);
    printf("Média: %.2f\n", student[i].average);
    printf("Matrícula: %d\n", student[i].registration);
    puts("____________________");
  }
}

// 2. **Cadastro de Produtos:**
// Crie uma estrutura `Produto` com campos como nome, preço e quantidade em
// estoque. Em seguida, permita ao usuário cadastrar vários produtos e depois
// imprima essas informações na tela.
struct ProductProps {
  char name[50];
  float price;
  int amount;
};

typedef struct ProductProps productProps;

void registerProducts() {
    int size = 2;
  productProps products[size];
  
  system("cls");
  puts("Programa para cadastrar produtos");

  int i;
  for(i =0; i < size; i++) {
    puts("Insira o nome do produto");
    scanf(" %49[^\n]s", products[i].name);    
    puts("Insira o preço do produto");
    scanf(" %f", &products[i].price);    

    puts("Insira a quantidade em estoque");
    scanf(" %d", &products[i].amount);    
    
    puts("____________________");
    
    system("cls");
  }

  for(i = 0; i<size; i++) {
    printf("Nome: %s\n", products[i].name);
    printf("Quantidade em estoque: %d\n", products[i].amount);
    printf("Preço: %.2f\n", products[i].price);
    puts("____________________");
  }
}
// 3. **Cadastro de Pessoas:**
// Crie uma estrutura `Pessoa` com campos como nome, idade, e cidade. Permita ao
// usuário cadastrar várias pessoas e depois imprima essas informações na tela.
struct PersonProps {
  char name[50];
  int age;
  char city[10];
};

typedef struct PersonProps personProps;

void registerPeople() {
    int size = 2;
  personProps people[size];
  
  system("cls");
  puts("Programa para cadastrar pessoas");

  int i;
  for(i =0; i < size; i++) {
    puts("Insira o nome da pessoa");
    scanf(" %49[^\n]s", people[i].name);    
    puts("Insira a idade da pessoa");
    scanf(" %d", &people[i].age);    

    puts("Insira a cidade da pessoa");
    scanf(" %9[^\n]s", people[i].city);    
    
    puts("____________________");
    
    system("cls");
  }

  for(i = 0; i<size; i++) {
    printf("Nome: %s\n", people[i].name);
    printf("Idade: %d\n", people[i].age);
    printf("Cidade: %s\n", people[i].city);
    puts("____________________");
  }
}


// 4. **Registro de Funcionários:**
// Crie uma estrutura `Funcionario` com campos como nome, cargo e salário.
// Permita ao usuário cadastrar informações de vários funcionários e depois imprima
// essas informações na tela.
struct EmployeeProps {
  char name[50];
  char role[20];
  float salary;  
};

typedef struct EmployeeProps employeeProps;

void registerEmployee() {
    int size = 2;
  employeeProps employees[size];
  
  system("cls");
  puts("Programa para cadastrar funcionários");

  int i;
  for(i =0; i < size; i++) {
    puts("Insira o nome do funcionário");
    scanf(" %49[^\n]s", employees[i].name);    
    puts("Insira o cargo do funcionário");
    scanf(" %19[^\n]s", &employees[i].role);    

    puts("Insira o salário do funcionário");
    scanf(" %f", &employees[i].salary);    
    
    puts("____________________");
    
    system("cls");
  }

  for(i = 0; i<size; i++) {
    printf("Nome: %s\n", employees[i].name);
    printf("Cargo: %s\n", employees[i].role);
    printf("Salário: %.2f\n", employees[i].salary);
    puts("____________________");
  }
}
// 5. **Cadastro de Livros:**
// Crie uma estrutura `Livro` com campos como título, autor e ano de publicação.
// Permita ao usuário cadastrar vários livros e depois imprima essas informações na
// tela.
struct bookProps {
  char title[20];
  char authorName[50];
  char publicationDate[11];  
};

typedef struct bookProps bookProps;

void registerBook() {
    int size = 2;
  bookProps books[size];
  
  system("cls");
  puts("Programa para cadastrar livros");

  int i;
  for(i =0; i < size; i++) {
    puts("Insira o títula do livro");
    scanf(" %19[^\n]s", books[i].title);    
    puts("Insira o nome do autor");
    scanf(" %49[^\n]s", books[i].authorName);    

    puts("Insira o ano de publicação");
    scanf(" %10[^\n]s", &books[i].publicationDate);    
    
    puts("____________________");
    
    system("cls");
  }

  for(i = 0; i<size; i++) {
    printf("Título do livro: %s\n", books[i].title);
    printf("Autor: %s\n", books[i].authorName);
    printf("Data de publicação: %s\n", books[i].publicationDate);
    puts("____________________");
  }
}

int main() {
  int option;

  puts("Digite um número para rodar o programa.");
  puts("1) Cadastro de alunos");
  puts("2) Cadastro de produtos");
  puts("3) Cadastro de pessoas");
  puts("4) Registro de funcionários");
  puts("5) Cadastro de livros");

  scanf(" %d", &option);

  switch (option)
  {
  case 1:  
    registerStudents();
    break;
  case 2:  
    registerProducts();
    break;
  case 3:  
    registerPeople();
    break;
  case 4:  
    registerEmployee();
    break;
  case 5:  
    registerBook();
    break;  
  
  default:
    break;
  }

  return 0;
}