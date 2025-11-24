#include<stdio.h>

int main() {
  // Meter -> Feet (Table of Conversion)
  double initial = 0, step = 0, stop = 0;
  
  do
  {
    printf("Initial value: ");
    scanf("%lf", &initial);
    if(initial < 0) printf("Enter Value >= 0\n");
  } while (initial < 0);
  
  do
  {
    printf("Step value: ");
    scanf("%lf", &step);
    if(step <= 0) printf("Enter Value > 0\n");
  } while (step <= 0);
  
  do
  {
    printf("Stop value: ");
    scanf("%lf", &stop);
    if(stop < 0) printf("Enter Value > 0\n");
  } while (stop < 0);

  printf(" Meter   Feet\n");
  for (double conv = initial;
       conv <= stop;
       conv += step)
  {
    printf("%6.2lf %6.2lf\n", conv, conv * 3.28084);
  }

  /*
    if step = 0.1 or some float, conv <= stop may not be true; 0.099999999999 <= 0.1;
  */
  
  return 0;
}