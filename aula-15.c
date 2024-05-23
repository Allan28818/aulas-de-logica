#include <stdio.h>



void fillArray(int *array, int size) {
  int i;

  for(i = 0; i < size; i++) {
    array[i] = rand() % 10;
  }
}

int main() {
  int numbers[10] = {1,2,3,4,5,6,7,8,9,10};

  fillArray(numbers, 10);

  int i;
  for(i=0; i < 10; i++) {
    printf("|%s|", numbers[i]);
  }

  return 0;
}