#include<stdio.h>

int main() {
  int i = 0;
  int num = 0;
  int total = 0;
  int total_numbers = 0;

  printf("How many numbers: ");
  scanf("%d", &total_numbers);

  while (i < total_numbers)
  {
    printf("Enter Number %d: ", i+1);
    scanf("%d", &num);
    total += num;
    i++;
  }

  printf("Total: %d\n", total);  
  printf("Average: %d\n", total/total_numbers); //Average  

  return 0;
}