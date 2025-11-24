#include<stdio.h>

void add_one(int array[], int length);

int main() {
  int arr[] = {12,34,5,43,4};

  // arr is a value which is the memory address of the array
  add_one(arr, 5);
  // This shouldn't have worked because we can't really modify parameters

  // %p stands for pointer, memory address.
  printf("%p\n", arr); //00000009929FFDC0

  for (int i = 0; i < 5; i++)
    printf("%d\n", arr[i]);

  return 0;
}

void add_one(int array[], int length) {
  for(int i = 0; i < length; i++) array[i]++;
}