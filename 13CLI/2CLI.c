#include<stdio.h>
#include<stdlib.h>

// printing 1st arg, second arg number of times.
int main(int argc, char *argv[]) {
  
  if (argc == 3)
  {
    printf("argv: %s\n", argv[1]);
    printf("argv: %s\n", argv[2]); // if i have to use this as the length in the loop then i have to convert it to an integer.
    int num_times = atoi(argv[2]);
  
    for (int i = 0; i < num_times; i++)
      printf("%s\n", argv[1]);
  }
  else
  {
    printf("2 Arguments Expected\n");
    printf("1st arg: The String\n");
    printf("2nd arg: Number of times\n");
    return 1;
  }

  return 0;
}