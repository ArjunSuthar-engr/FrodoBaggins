#include<stdio.h>

// the parameters in the following functions are both integers which are scoped
// the int before the function name is the return type.
int find_max(int a, int b) {
  // we cannot use result here because it is declared inside main(because it has local/function scope)
  // result has the scope of the main function 
  if(a > b) return a;
  else return b;
}

int main() {
  // calling the function
  int max = find_max(10,5);

  printf("%d\n", max);

  return 0;
}