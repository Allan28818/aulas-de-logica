#include <stdio.h>
#include <math.h>

typedef struct Points {
  float x;
  float y;
} points;

float calculateDistanceBetweenPoints(points coordinates) {
  return sqrt(coordinates.x * coordinates.x + coordinates.y * coordinates.y);
}

int main() {
  points coordinates;
  puts("Programa para calcular distância entre um ponto e a origem");

  puts("Digite a coordenada y");
  scanf("%f", &coordinates.y);
  puts("Digite a coordenada x");
  scanf("%f", &coordinates.x);
  
  printf("Distância %.2f\n", calculateDistanceBetweenPoints(coordinates));

  return 0;
}