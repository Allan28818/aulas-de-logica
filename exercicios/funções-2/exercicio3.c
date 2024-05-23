#include <stdio.h>

typedef struct StudentProps {
  char name[50];
  float grades[3];
} studentProps;

float calculateAverage(studentProps student) {
  
  int size = sizeof(student.grades) / sizeof(student.grades[0]);

  float gradesSum = 0;

  int i;

  for(i = 0; i<size; i++) {
    gradesSum += student.grades[i];
  }

  return gradesSum / size;
}

int main() {
  studentProps student = { "Aluno 1", {9.1, 7.2, 8.9} };  

  printf("O estudante %s obteve a média %.2f\n", student.name, calculateAverage(student));


  return 0;
}