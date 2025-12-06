#include<stdio.h>

#define thisIsGlobal 10
int xIsGlobalHere = 55;

int main() {
  int xIsGlobalHere = 5; // this is valid, the local variable will take precidence over the global variable.
  const int thisCanBeScoped = 90;

  printf("%d\n", xIsGlobalHere);
  printf("%d\n", thisCanBeScoped);
  // fgets(buffer, sizeof(buffer), stdin); //get input not from the file but the stdin, the terminal
  // fgets() reads till newline

  return 0;
}