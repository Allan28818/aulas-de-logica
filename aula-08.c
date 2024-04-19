#include <stdio.h>

#define SIZE 5

int main() {
  int grades[SIZE];
  int sumOfGrades = 0;

  int i;

  for(i=0; i < SIZE; i++) {
    int currentGrade;
    printf("Digite a nota %d\n", i + 1);
    scanf("%d", &currentGrade);

    sumOfGrades += currentGrade;
  }

  printf("A média das %d notas é %.2f\n", SIZE, sumOfGrades / SIZE);
  
  return 0;
}