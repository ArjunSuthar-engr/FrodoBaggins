#include<stdio.h>
#include<stdlib.h>

// malloc() only saves the memory block but does not clear the values
// calloc() clears and sets all the values to 0

int main() {
  int *a;

  // calloc is more time comsuming than malloc because it to go to every memory location and make sure it's 0.
  a = calloc(5, sizeof(int));
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 55;
  a[4] = 32;
  for (int i = 0; i < 5; i++)
    printf("%d\n", a[i]);

  // always free the memory after use to make sure it's availabe for other uses
  free(a);

  // if we don't free it we could have an memory leak, where we don't actually have access to the memory to free it in the future because maybe we've changed the pointer or someting like that and we've lost track of the original memory address or the original pointer to that space.
  // Or we could run out of memory.

  // Python or Java like languages have a garbage collector that checks if there is any variable in memory refrencing the memory block that is set aside, if not it'll free it. THIS TAKES TIME, so C wins on performance.

  return 0;
}