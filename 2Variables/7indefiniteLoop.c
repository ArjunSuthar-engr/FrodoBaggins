#include<stdio.h>

int main() {
  int number = 0;
  int max = -1; //Assuming the numbers entered by the user are non -ve.

  while(number != -1)
  {
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number > max) max = number;
  }

  printf("Max: %d", max);

  return 0;
}