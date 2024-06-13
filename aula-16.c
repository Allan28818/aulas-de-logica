#include <stdio.h>

void swap(int *i, int *j) {
  int temp;
  temp = *i;
  *i = *j;
  *j = temp;
}

int main() {
  int a, b, *p1, *p2;

  a = 4;
  b = 3;
  p1 = &a;
  p2 = p1;

  printf("a: %p\n", &a);
  printf("b: %p\n", &b);
  printf("p1: %p\n", &p1);
  printf("p2: %p\n\n", &p2);

  *p2 = *p1 + 3;

  printf("a: %d\n", a);

  b = b * (*p1);

  printf("b: %d\n", b);

  (*p2)++;

  printf("a: %d\n", a);

  p1 = &b;

  printf("p1: %p", p1);
  
  return 0;
}