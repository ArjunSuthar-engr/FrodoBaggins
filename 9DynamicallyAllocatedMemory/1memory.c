#include<stdio.h>
// Another big application for pointers in c is Dynamically allocated memory.


// we can't increase the size of array due to this 'Stack Memory'
// Dynamically allocated memory exist on the heap.
int main() {
  int a = 6;
  int b = 7;

  func();

  return 0;
}

// after returing the followin value, all the memory locations will be free to use.
int func() {
  int c = 8;
  int d = 9;
  int arr[8];
  int e = 10;
}