#include <stdio.h>
#include <stdlib.h>

int simulateDice() {
  srand(time(NULL));
  return (rand() % 6) + 1;
}

int main() {
  printf("O número aleatório é %d", simulateDice());

  return 0;
}