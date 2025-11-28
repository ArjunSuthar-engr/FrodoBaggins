#include<stdio.h>

// pass by refrence(remember the refrence?)
// this is really helpful, we can modify the variables in the main function using other functions
void add_one(int *p);

int main() {
  int a = 5;
  add_one(&a);
  printf("%d\n", a);

  return 0;
}

void add_one(int *p) {
  // The postfix ++ has higher precedence than *
  // *p++;
  (*p)++; // This would work just fine.
  // *p = *p + 1;
}