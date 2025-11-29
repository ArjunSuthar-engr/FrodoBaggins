#include<stdio.h>

typedef struct {
  int x;
  int y;
} Point;

int main() {
  Point p1 = {1,2};

  printf("(%d, %d)\n", p1.x, p1.y);

  return 0;
}