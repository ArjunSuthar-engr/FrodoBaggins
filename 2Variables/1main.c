#include<stdio.h>

// IPO = Input Processing Output

int main() {
  // Initilization is important in C because the variable can have garbage values at that location if not;
  int speed = 5;
  int time = 10;

  // Declaring a variable and initilizing with a expression instead of a value.
  int distance = speed * time;

  printf("Distance = %d", distance);

  return 0;
}