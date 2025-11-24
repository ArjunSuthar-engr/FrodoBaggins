#include<stdio.h>

void add_one(int *array, int length);
// void add_one(int array[], int length);

int main() {
  int arr[] = {1,2,3};

  // here we are passing an array which 'decays to a pointer'
  // what we are really passing is the memory address.
  add_one(arr, 3);

  for (int i = 0; i < 3; i++)
    printf("arr[%d] = %d\n", i, arr[i]);  

  return 0;
}

// it turns out that very often we can treat arrays like pointers and vice-versa but not always
void add_one(int *array, int length) {
  for (int i = 0; i < length; i++) array[i]++;  
}