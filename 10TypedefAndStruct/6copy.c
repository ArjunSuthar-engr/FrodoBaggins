#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// a.data1 = 7;
// a.data2 = 10;
// 
// b = a --> sets the following data
// b.data1 = 7;
// b.data2 = 10;
// Dangerous case can be when we have a pointer in struct[ref 7pointer]

// structs can also contain pointer as well
typedef struct{
  int data1;
  int data2;
} Info;

int main() {
  Info a;
  a.data1 = 7;
  a.data2 = 10;
  Info b;
  b = a;

  printf("%d\n", b.data1);
  printf("%d\n", b.data2);

  return 0;
}