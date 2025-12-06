#include<stdio.h>

int main() {
  int a = 5;
  int b = 2;

  double c = (double) a / b;

  printf("%d / %d = %d\n", a, b, a/b);
  printf("%d / %d = %.2f\n", a, b, c);

  return 0;
}