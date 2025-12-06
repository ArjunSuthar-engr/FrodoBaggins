#include<stdio.h>

#define ROWS 2
#define COLS 3

void input_array(int data[ROWS][COLS]);
void print_array(int data[ROWS][COLS]);

int main() {
  int data[ROWS][COLS] = {0}; //initilizing with 0

    input_array(data);
    print_array(data);
    
    return 0;
  }

// 2D arrays are pass by refrence like 1D
void input_array(int data[ROWS][COLS]) {
  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLS; j++)
    {
      printf("data[%d][%d]: ", i, j);
      scanf("%d", &data[i][j]);
    }  
}

// void print_array(int data[][]) //INVALID, Providing one of em is also valiid.
void print_array(int data[ROWS][COLS]) {
  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLS; j++)
      printf("%d ", data[i][j]);
}