#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// a.data = 7;
// a.array = 0x1234A;
// 
// b = a --> sets the following data(It just copies the entire thing even the same pointer)
// b.data = 7;
// b.array = 0x1234A;

// structs can also contain pointer as well
typedef struct{
  int data;
  int *array;
} Info;

int main() {
  Info a;
  a.data = 7;
  // a.array is going to store a pointer to that memory allocated in the heap.
  a.array = malloc(sizeof(int) * 5);
  for (int i = 0; i < 5; i++)
    a.array[i] = i+1;

  Info b = a; //the pointer to a is copied for array pointer here

  printf("b.data = %d\n", b.data); //7
  
  for (int i = 0; i < 5; i++)
    printf("b.array[%d] = %d\n", i, b.array[i]);

  printf("a.array = %p\n", a.array); 
  printf("b.array = %p\n", b.array); 

  free(a.array);

  return 0;
}