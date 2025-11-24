#include<stdio.h>

int main() {
  // for keeps all the i statements in one place
  // i is scoped here
  for (int i = 1; i < 6; i++)
  {
    printf("%d\n", i);
  }
  
  return 0;
}