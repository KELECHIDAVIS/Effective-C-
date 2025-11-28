#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
  int arr[10] = {1,1,2, 3,3,4,4,4,2,2}; 
  
  int resultingArr[10][10]; // max size is 10 sub arrs of 1 element  // 2d arr that holds the results 
  
  // while not at  the end of the first arr 
  // if i != previ the create a new sub arr  
  // add i to sub_arr
  int subArrIt = 0 ; 
  int arrIt = 0 ; // it to read from original list 

  for (int i = 0 ; i< 10;  i++){
    if (i==0 || resultingArr[subArrIt] [i-1]== arr[i]){
      // first it 
      resultingArr [subArrIt][i] = arr[i];

    }else {
      // new sub array needs to be created 
      //
    }
  } 
  return EXIT_SUCCESS;
}
