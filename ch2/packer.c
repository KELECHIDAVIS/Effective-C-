#include <stdlib.h>
#include <stdio.h> 


void packer (int* arr , int n , int*** resultArr, int *rows, int** colSizesArr){ 
  // iterate through arr 
  // if starting or current element == prev element, add to the sub arr
  // else create new array, add current element to array 
  
  // allocate max amount for result 
  (*resultArr) =  malloc(n * sizeof(int*));
  (*colSizesArr) = calloc(n , sizeof(int)); // init the bytes to "0", meaning the row is empty
  
  for (int i = 0; i< n; i++){
    if(i==0 || arr[i] != arr[i-1]){
      // create new array  
      (*resultArr)[*rows] = malloc (n* sizeof(int)) ; // max size  
      (*resultArr)[*rows][(*colSizesArr)[*rows]] = arr[i] ;
      (*colSizesArr)[*rows]++ ; // initialized to one 
     (*rows)++;   
    } else{
      // the numbers are the same , so append to this current list 
       (*colSizesArr)[*rows - 1 ]++ ; // initialized to one 
      (*resultArr)[*rows -1 ][(*colSizesArr)[*rows -1 ] -1 ] = arr[i] ; 
       
    } 
  }
}

int main (int argc , char *args[]) {
  const int n = 10 ; 
  int arr[] = {1,1,1 ,2, 3, 4,4, 2, 2, 1} ;
  
  printf("Original Array: [ " ); 

  for (int i = 0; i< n ; i++ ) {
    printf(" %d " , arr[i]) ; 
  } printf(" ]\n") ; 
  
  int **resultArr ; // 2d array that has the packed sub arrays within 
  int rows = 0;
  int *colSizesArr; // each row can have diff amt of cols 
  
  packer ( arr , n , &resultArr, &rows, &colSizesArr ); 

  printf("Resulting array has %d rows: [ ", rows);

  for (int i =0; i< rows; i++ ){
    printf(" [");
    for (int j = 0 ; j< colSizesArr[i]; j++ ){
      printf(" %d ", resultArr[i][j]) ;
    }
    printf("] ");
  }
  
  // free memory 
  free(colSizesArr);

  for (int i = 0; i< rows ; i++){
    free(resultArr[i]);
  }
  free (resultArr); 

  printf("]\n");
  return EXIT_SUCCESS; 
}
