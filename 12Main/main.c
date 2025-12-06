#include<stdio.h>

int main() {
  // te return value of main is actually gonna go to the terminal
  // terminal is something we call shell and a shell runns the program for us

  // the return value is going to be a signal whether the program executed successfully or not

  // PS C:\Users\Arjun\FrodoBaggins\11Main> echo $?
  // True

  /*
  PS> dir
  PS> echo $?
  True    # means "dir" worked successfully

  PS> ls | xyz   # xyz doesn't exist
  PS> echo $?
  False   # means the previous command failed
  */

  // >> echo $LASTEXITCODE
  //    0

  return 0;
  printf("hi\n"); // this will not get printed.
}