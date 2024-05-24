#include <stdio.h>

int main() {
  int array[5];

  int i;
  for(i=0; i<5; i++) {
    printf("Digite o %dº número\n", i+1);
    scanf(" %d", &array[i]);
    fflush(stdin);
  }

  for(i=4; i>=0; i--) {
    printf("|%d|", array[i]);
  }

  return 0;
}