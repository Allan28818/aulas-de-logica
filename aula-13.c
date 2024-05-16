#include <stdio.h>

#define usersAmount 5

struct Person {
  char name[50];
  int age;
  float balance;
};

struct Product {
  float price;
  char name[10];
};

typedef struct Person person;
typedef struct Product product;


int buyProduct(product product, person person) {
  if(person.balance >= product.price) {
    person.balance -= product.price;

    printf("Compra de %s aprovada!\n", product.name);

    return 1;
  }

  puts("Saldo insuficiente!");
  return 0;
}

void addResources(person person, float valueToAdd) {
  person.balance += valueToAdd;
}

int main() {
  int option;

  person user;
    

  puts("Digite o seu nome para começar...");
  scanf("%s", &user.name);
  puts("Digite a sua idade");
  scanf("%d", &user.age);

  system("cls");


  while(option != 0) {

  }
  

  
  return 0;
}