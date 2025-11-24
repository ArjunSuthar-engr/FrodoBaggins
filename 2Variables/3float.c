#include<stdio.h>

int main() {
  // float is short for floating point number
  float x = 3.14;
  float y = -52.245;
  double z = -52.245;

  printf("%f\n", x); //3.140000
  printf("%f\n", y); //-52.244999, computers store floats with some use of fractions so it's mostly not accurate
  printf("%lf", z); // -52.245000

  return 0;
}