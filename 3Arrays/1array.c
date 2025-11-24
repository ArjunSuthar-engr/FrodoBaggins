#include<stdio.h>

int main() {
  // An array is a collection of data in memory, that can all be accessed using index
  int grade[5];
  grade[0] = 44;
  grade[1] = 45;
  grade[2] = 46;
  grade[3] = 47;
  grade[4] = 48;

  for (int i = 0; i < 5; i++)
  {
    printf("Index %d = %d\n",i, grade[i]);
  }

  int total = 0;
  for (int i = 0; i < 5; i++)
  {
    total += grade[i]/5;
  }
  
  printf("Average: %d", total);

  return 0;
}