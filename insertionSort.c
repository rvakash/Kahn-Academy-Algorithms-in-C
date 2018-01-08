#include <stdio.h>
#include <stdlib.h>

/*-------------------------------------------------------------
Function INSERT
Purpose: Insert the value in the array at position where value is greater than its left element or in the beginning of the array
Parameters: array - The array in which the value is to be inserted.
            rightIndex - The index from which the elements on the must be shifted by 1 place to accomodate the new insertion.
            value - The value that needs to be inserted.
Returns: Void
--------------------------------------------------------------*/
void insert(int array[], int rightIndex, int value){
  int i;
  for(i = rightIndex; i>=0 && value<array[i]; i--){
    array[i+1] = array[i];
  }
  array[i+1] = value;
}

/*-------------------------------------------------------------
Function INSERTIONSORT
Purpose: Sort the given array in ascending order.
Parameters: array - The array that needs to be sorted.
            size - The size of the array.
Returns: Void
--------------------------------------------------------------*/

void insertionSort(int array[], int size){
  int i;
  for(i=0; i<size-1; i++){
    insert(array, i, array[i+1]);
  }
}

void main(){
  int array[] = {22, 11, 99, 88, 9, 7, 42, 0 , 100, 27, 2};
  int i, size;
  size = sizeof(array)/sizeof(array[0]);
  insertionSort(array, size);
  printf("Array after sorting:  ");
  for(i=0; i<=size-1; i++){
    printf("%d ", array[i]);
  }
}
