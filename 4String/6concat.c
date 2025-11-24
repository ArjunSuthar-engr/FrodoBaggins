#include<stdio.h>
#include<string.h>

int main() {
  char s1[50] = "This is String1";
  char s2[] = "This is String1";

  // string concat
  // strcat(s1, s2);
  // printf("%s\n", s1);

  // string compare, this function returns 0 if the strings are equal.
  if(strcmp(s1, s2) == 0)
    printf("S1 = S2\n");
  else
    printf("S1 not equal to S2\n");  

  return 0;
}