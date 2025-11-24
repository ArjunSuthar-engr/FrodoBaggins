#include<stdio.h>

// void returns nothing
void print_two(float a, float b);

int main() {
  float x = 2.5, y = 2.2;

  print_two(x,y);

  return 0;
}

void print_two(float a, float b) {
  printf("%f\n", a);
  printf("%f\n", b);
}