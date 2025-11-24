#include<stdio.h>

// variables                    address    value
// a (stores int)               56         8
// b (int)                      57         10
// p (pointer to int, not int)  58         57
// p does not store an int

int main() {
  int a = 8;
  int b = 10;
  int *p; // this star is used to declare a pointer

  p = &b;

  // printing the value of p
  printf("p: %p\n", p);
  printf("&b: %p\n", &b);
  
  // the star here is called a de-refrence operater
  // when we de-refrence the pointer what we do is get the value stored at that memory address.
  printf("%d\n", *p);

  a = a + *p;

  printf("%d\n", a);

  return 0;
}

/*
why not use &var directly instead of saving it in the pointer variable.

You can’t modify &var.
You can’t say:
  &var = something_else;
  because &var isn’t a variable—it's just a computed value.
  Pointers are variables.
*/