#include<stdio.h>

int main() {
  int number = 0;

  do
  {
    printf("Enter a number >0: ");
    scanf("%d", &number);
  } while (number <= 0);
  
  printf("The Number: %d", number);

  return 0;
}