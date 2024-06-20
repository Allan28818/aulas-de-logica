#include <stdio.h>

int main() {
  int array[5];
  
  printf("Full array address: %p\n", &array);

  int i;
  for(i = 0; i < 5; i++) {    
    puts("Digite um número para o array:");
    scanf("%d", &array[i]);
    printf("array[%d] address: %p\n", i, &array[i]);
  }

  for(i = 0; i <= 5; i++) {
    printf("&array[%d]=%p; array[%d] = %d\n", i, &array[i], i, array[i]);
  }

  return 0;
}