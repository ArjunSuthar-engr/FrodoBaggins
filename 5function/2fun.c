#include<stdio.h>

// Function definition
float triple(float n);

int main() {
  float x = 5.0;

	x = triple(x);

	printf("%f\n", x);

  return 0;
}

// Function definition
float triple(float n) {
  n *= 3;
  return n;
}
