#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int factorial(int n){
  if (n==0)
    return 1;
  return n * factorial(n-1);
}

int main(){
  int n = 5;
  printf("Fatorial of %d = %d\n", n, factorial(n));
}
