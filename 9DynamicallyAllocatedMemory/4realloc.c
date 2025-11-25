#include<stdio.h>
#include<stdlib.h>

int main() {
  // We can enlarge the space we've allocated using realloc
  int *numbers;
  int size = 2;
  numbers = malloc(sizeof(int) * size);
  int input = 0, i = 0;

  do
  {
    if(i == size) {
      size += 2;
      // if realloc cannot allocate memory if there is other useful data then it'll copy the entire data with new size somewhere else.
      numbers = realloc(numbers, sizeof(int) * size);
      printf("Realloc for %d ints\n", size);
    }
    printf("Enter -1 to quit: ");
    scanf("%d", &input);
    if(input != -1) {
      numbers[i] = input;
      i++;
    }

  } while (input != -1);

  int num_elements = i;
  int total = 0;
  for(int j = 0; j < num_elements; j++)
    total += numbers[j];

  printf("average: %d\n", total / num_elements);  

  free(numbers);

  return 0;
}