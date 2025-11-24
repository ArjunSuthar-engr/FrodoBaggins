#include<stdio.h>
#include<string.h>

int main() {
  // Alternative for 4
  char str[] = "This is a Sttttring";

  int length = strlen(str);

  printf("%s\n", str);

  int num_ts = 0;

  for (int i = 0; i < length; i++)
  {
    if (str[i] == 't') num_ts++;
  }

  printf("%d\n", num_ts);  

  return 0;
}