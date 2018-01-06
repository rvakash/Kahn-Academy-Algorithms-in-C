#include <stdio.h>
#include <stdlib.h>
/*-------------------------------------------------------------
Function SWAP
Purpose: Swap two element inside an array
Parameters: array - The array in which the elements need to be swapped.
	    firstIndex - The element to be swapped.
	    secondIndex - with this element.
Returns: Void
--------------------------------------------------------------*/
void swap(int array[], int firstIndex, int secondIndex){
  int temp = array[firstIndex];
  array[firstIndex] = array[secondIndex];
  array[secondIndex] = temp;
}

/*-------------------------------------------------------------
Function INDEXOFMINIMUM
Purpose: Find the index of the minimum element, starting from the startIndex, of the given array
Parameters: array - The array in which the elements need to be searched.
            size - The size of the array.
            startIndex - Index from where minimum value needs to be found.
Returns: index of minimum value
--------------------------------------------------------------*/

int indexOfMinimum(int array[], int size, int startIndex){
  int minValue = array[startIndex];
  int minIndex = startIndex;
  int i;
  for(i = minIndex + 1; i < size; i++) {
    if(array[i] < minValue) {
      minIndex = i;
      minValue = array[i];
    }
  }
  return minIndex;
}
/*-------------------------------------------------------------
Function SELECTIONSORT
Purpose: Sort the given array in ascending order.
Parameters: array - The array that needs to be sorted.
            size - The size of the array.
Returns: Void
--------------------------------------------------------------*/
void selectionSort(int array[], int size){
  int i, small;
  for(i=0;i<size;i++){
    small = indexOfMinimum(array, size, i);
    swap(array, i, small);
  }
}

int main(){
  int array[] = {22, 11, 99, 88, 9, 7, 42};
  int i,size;
  size = sizeof(array)/sizeof(array[0]);
  selectionSort(array, size);
  printf("Array after sorting: ");
  for(i=0;i<size;i++){
    printf("%d ", array[i]);
  }
  return 0;
}
