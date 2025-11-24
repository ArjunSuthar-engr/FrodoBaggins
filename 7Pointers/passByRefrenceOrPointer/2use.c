#include<stdio.h>

// earlier we were able to modify only one variable use the return value, bu now we can modify multiple values at once.
void add_one(int *p, int *q, int *r);

int main() {
  int a = 5;
  int b = 6;
  int c = 7;
  add_one(&a, &b, &c);
  printf("a: %d\n", a);
  printf("b: %d\n", b);
  printf("c: %d\n", c);

  return 0;
}

void add_one(int *p, int *q, int *r) {
  *p = *p + 1;
  *q = *q + 1;
  *r = *r + 1;
}