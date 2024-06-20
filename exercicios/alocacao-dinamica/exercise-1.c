#include <stdio.h>
#include <stdlib.h>



void showArrayValues(int * array, int size) {
  int i;

  for(i = 0; i < size; i++) {
    printf("array[%d]=%d\n", i, array[i]);
  }
}

void showArrayValues2(int array[], int size) {
  int i;

  for(i = 0; i < size; i++) {
    printf("array[%d]=%d\n", i, array[i]);
  }
}



int main() {  
  int size = 10;
  int *array = malloc(size * sizeof(int));
  int *arrayRef = array;


  showArrayValues(arrayRef, sizeof(arrayRef) / sizeof(arrayRef[0]));
  showArrayValues2(array, 5);

  return 0;
}