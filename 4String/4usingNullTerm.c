#include<stdio.h>

int main() {
  char str[20];

  printf("Enter: ");
  scanf("%s", str);

  int  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] == '0')
      printf("Found 0\n");
    i++;
  }
  
  return 0;
}