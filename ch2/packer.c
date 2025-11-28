#include <stdlib.h>
#include <stdio.h> 


void packer (int* arr , int n , int** resultArr, int *rows, int* colSizesArr){ 
  // iterate through arr 
  // if starting or current element == prev element, add to the sub arr
  // else create new array, add current element to array 
  
  // allocate max amount for result 
  resultArr = malloc(n * sizeof(int));
  colSizesArr = malloc(n* sizeof(int));

  for (int i = 0; i< n; i++){
    if(i==0 || arr[i] != arr[i-1]){
      // create new array  
       resultArr[i] = malloc (n* sizeof(int)) ; // max size  
    }  
  }
}

int main (int argc , char *args[]) {
  const int n = 10 ; 
  int arr[] = {1,1,1 ,2, 3, 4,4, 2, 2, 1} ;
  
  int **resultArr ; // 2d array that has the packed sub arrays within 
  int rows = 0;
  int *colSizesArr; // each row can have diff amt of cols 
  
  packer ( arr , n , resultArr, &rows, colSizesArr ); 

  printf("Resulting array: [ ");

  for (int i =0; i< rows; i++ ){
    printf("[");
    for (int j = 0 ; j< colSizesArr[i]; j++ ){
      printf("%d ", resultArr[i][j]) ;
    }
    printf("]\n");
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
