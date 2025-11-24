#include<stdio.h>

int main() {
  // Strings in C are character array that end with a perticular special character called the null terminator.
  // This character \0 signifies the end of the string
  char myData[5];

  myData[0] = 'a';
  myData[1] = 'b';
  myData[2] = 'c';
  myData[3] = 'd';
  myData[4] = '\0';

  // C has no idea how long your “string” is. When printf("%s", myData) runs, it keeps reading memory byte after byte until it accidentally encounters a \0 somewhere beyond your array

  printf("%c\n", myData[2]);

  printf("%s\n", myData);

  return 0;
}