#include<stdio.h>

int main() {
  char str[] = "This is a String";

  printf("%s\n", str);

  for (int i = 0; i < 17; i++)
  {
    // We don't see null terminator in the printing, because it's an invisible character
    if(str[i] == '\0')
      printf("str[%d] nt\n", i);
    else
      printf("str[%d] %c\n", i, str[i]);
  }
  

  return 0;
}