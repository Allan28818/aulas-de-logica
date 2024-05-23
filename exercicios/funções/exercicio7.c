#include <stdio.h>
#include <stdlib.h>

// 7. **Simular um dado de 6 faces:**
// Crie uma função chamada `Dado()` que
// retorne, através de sorteio, um número de
// 1 até 6.
int simulateDice() {
  srand(time(NULL));
  return (rand() % 6) + 1;
}

int main() {
  printf("O número aleatório é %d", simulateDice());

  return 0;
}