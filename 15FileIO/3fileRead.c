#include<stdio.h>

int main() {
  FILE *fh_read;

  fh_read = fopen("write.txt", "r");
  if (fh_read == NULL)
  {
    printf("File could not be opened.\n");
    return 1; //cause we got a problem here.
  }
  else
  {
    char buffer[100];
    // fgets(buffer, 100, fh_read); //it will stop when encounter a newline character.
    while (fgets(buffer, 100, fh_read) != NULL) //fgets will return NULL when it can't read anymore.
      printf("%s", buffer);
    fclose(fh_read);
  }
  
  return 0;
}