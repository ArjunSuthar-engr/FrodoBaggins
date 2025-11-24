#include<stdio.h>

int main() {
  // An array is a collection of data in memory, that can all be accessed using index
  int grade[] = {1,2,3,4,5};

  // This may work but it is a bad practice because we are accessing the memory location outside which is declared for grade[] array. i.e. next memory location which may had some important data.
  grade[5] = 22;
  // printf("%d\n", grade[5]);

  return 0;
}