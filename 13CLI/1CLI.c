#include<stdio.h>

// argv[] is the array of strings.
int main(int argc, char *argv[]) {
  printf("argc: %d\n", argc);

  printf("argv: %s\n", argv[1]);

  for (int i = 0; i < argc; i++)
    printf("args[%d]: %s\n",i, argv[i]);

  return 0;
}