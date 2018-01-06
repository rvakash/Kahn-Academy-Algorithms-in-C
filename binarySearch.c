#include <stdio.h>
#include <stdlib.h>

int main(){

 int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
 int size = sizeof(primes)/sizeof(primes[0]);
 int result = doSearch(primes, size, 3);
 printf("Found prime at index %d", result);
 return 0;
}
/*
In C, Arrays does not work with pass by value. It decays to a pointer pointing to the first element of the array.
Hence it looses all of its other array parameters such as sizeof(). So, size has to be calculated before passing.
*/
int doSearch(int array[], int size,  int targetValue){
// printf("  %d", array[20]);
 int min = 0;
 int max = size - 1;
 while(max>=min){
  int guess = (min + max)/2;
//  printf(" min = %d  max = %d", min, max);
//  printf(" array[guess] = %d", array[guess]);
  if (array[guess] == targetValue){
   return guess;
  }
  else if(array[guess] < targetValue){
   min = guess + 1;
  }
  else if(array[guess] > targetValue){
   max = guess - 1;
  }
 }
 return -1;
}
