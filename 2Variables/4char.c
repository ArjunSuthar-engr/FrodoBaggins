#include<stdio.h>

int main() {
  // characters are fundamentally integers.
  // We can call the following values as literal values.
  char c = 'e';
  int num = 5;
  float num2 = -32.3;

  printf("Character input: ");
  scanf("%c", &c);

  printf("c: %c\n", c);
  printf("c: %d\n", c);

  return 0;
}