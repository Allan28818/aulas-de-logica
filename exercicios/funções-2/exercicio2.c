#include <stdio.h>

typedef struct Sizes{
  float width;
  float height;
} sizes;

float calculateRectangleArea(sizes widthAndHeight) {
  return widthAndHeight.width * widthAndHeight.height;
}

int main() {
  sizes widthAndHeight;
  puts("Programa para calcular a área de um retângulo.");

  puts("Digite largura");
  scanf("%f", &widthAndHeight.width);
  puts("Digite altura");
  scanf("%f", &widthAndHeight.height);
  
  printf("Área %.2f\n", calculateRectangleArea(widthAndHeight));

  return 0;
}