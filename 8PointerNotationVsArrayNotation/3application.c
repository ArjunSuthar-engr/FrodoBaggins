#include<stdio.h>

void add_one(int *array, int length);

int main() {
  int arr[] = {1,2,3,4,5,6,7,7,8};

  add_one((arr + 5), 4);

  for (int i = 0; i < 9; i++)
    printf("arr[%d] = %d\n", i, arr[i]);  

  return 0;
}

void add_one(int *array, int length) {
  for (int i = 0; i < length; i++) array[i]++;  
}