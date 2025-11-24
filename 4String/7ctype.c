#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
  char s[] = "THIs is A String";

  s[0] = tolower(s[0]);

  int length = strlen(s);
  for (size_t i = 0; i < length; i++)
  {
    printf("%c ", s[i]);
    if(isupper(s[i])) printf("upper\n");
    else if(islower(s[i])) printf("lower\n");
    else printf("Not a letter\n");
  }
  
  return 0;
}