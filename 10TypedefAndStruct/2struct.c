#include<stdio.h>

// typedef and struct allows us to use new types
struct Point {
  // the following are called the members of the struct Point
  int x;
  int y;
};

int main() {
  // Struct is a tool that allows us to group related information together
  // struct type varName;
  struct Point p1;
  p1.x = 5;
  p1.y = 6;

  printf("(%d, %d)\n", p1.x, p1.y);

  struct Point p2;
  p2.x = 7;
  p2.y = 8;

  printf("(%d, %d)\n", p2.x, p2.y);
  
  // another way for initializing
  struct Point p3 = {1,2};
  printf("(%d, %d)\n", p3.x, p3.y);
  
  // Another way to initialize using dot notation; order does not matter
  struct Point p4 = {
    .y = 7,
    .x = 6
  };
  printf("(%d, %d)\n", p4.x, p4.y);

  return 0;
}