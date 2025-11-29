#include<stdio.h>
#include<stdlib.h>

// Variable     address    value
// STACK starts top to bottom
// a            55         6
// b            56         7
// c            57         8
// d            58         9
//              ..
//              ..
//              ..
//              ..
// a[0]         68         534
// a[1]         68         234
// a[2]         68         23
// a[3]         68         2
// ..           68         65
// HEAP starts bottom up

// malloc() only saves the memory block but does not clear the values

// we can't increase the size of array due to this 'Stack Memory'
// Dynamically allocated memory exist on the heap.
int main() {
  int *a; // a is going to be the pointer to that space that i'm going to dynamically allocate

  // memory for 5 integers
  // malloc is going to return is the memory address(pointer, where we can use array notation) of this block of space on the heap. It's going to return a pointer.
  a = malloc(sizeof(int) * 5);
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 55;
  a[4] = 32;
  for (int i = 0; i < 5; i++)
    printf("%d\n", a[i]);

  free(a);
  return 0;
}