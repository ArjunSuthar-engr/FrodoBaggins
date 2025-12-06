#include<stdio.h>

int main() {
  // file handle variable
  FILE *fh_apend;
  int x = 100;

  // w: apends to the existing data.
  fh_apend = fopen("write.txt", "a");
  if (fh_apend == NULL){
    printf("Error opening file.");
    return 1;
  }
  else
    fprintf(fh_apend, "val: %d!\n", x);

  fclose(fh_apend);  

  return 0;
}