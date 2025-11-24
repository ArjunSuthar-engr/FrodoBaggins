#include<stdio.h>

int main() {
  int arr[] = {1,2,3};

  int *p;
  p = arr; // this is actually the address of the first element in the array, because this is where the data begins.

  // arr[2]; // this means the value that is stored 2 blocks away from where the array arr starts.

  // THis is called 'array notation', we can use this even for pointers because what we are saying is that go to the memory location given by p and shift by 2
  printf("p[2] = %d\n", p[2]);
  printf("arr[2] = %d\n", arr[2]);

  // Pointer notation
  // add 1 position to memory and then de-refrence it(meaning get the value at that address).
  printf("*(p + 1) = %d\n", *(p + 1));
  
  printf("*(a + 1) = %d\n", *(arr + 1));
  // that was pointer arithmetic

  // What's the difference b/w arrays and pointers(if we can use them interchangebly)
  // we can't assign values to an array
  // arr = p; //Invalid

  return 0;
}