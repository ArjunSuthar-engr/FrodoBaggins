#include<stdio.h>

int main() {
  char str[20];

  printf("Enter: ");
  scanf("%s", str);

  for (int i = 0; i < 20; i++)
  {
    printf("str[%d] = %c\n", i, str[i]);
  }

  return 0;
}