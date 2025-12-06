#include<stdio.h>

// it basically creates synonyms for rows and columns
// This is called a preprocessor statements, Compiler has a preprocessing stage where gets the header file and also insert the number wherever there are ROWS or COLS.
#define ROWS 2
#define COLS 3

int main() {
  int data[ROWS][COLS] = {{1,2,3},
                          {4,5,6}};

  // char data[2][3] = {1,2,3,4,5,6}; //Will work fine.
  // const/define doesn't change value at Runtime, it can be changed at compile time(i.e. when we are writing it)

  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLS; j++)
      printf("%d ", data[i][j]);
  
  // printf("%d\n", data[1][1]);

  return 0;
}