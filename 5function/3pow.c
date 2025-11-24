#include<stdio.h>

double mult(double x, double y);
double power(double x, int n);

int main() {
  printf("%f\n", power(2,3));

  return 0;
}

double mult(double x, double y) {return x*y;}

/*
double power(double x, int n) {
  double result = 1;

  for (int i = 1; i < n; i++)
  {
    result *= x;
  }
  
  return result;
}
*/

double power(double x, int n) {
  double result = x;

  for (int i = 1; i < n; i++) {
    result = mult(result, x);
  }
  
  return result;
}