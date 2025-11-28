#include <stdio.h>
#include <stdlib.h> 

int factorial (int n  , int accumulator ){
  if (n <= 1){
    return accumulator ; 
  }
  return factorial(n-1, n*accumulator); 
}
int main(int argc , char* args[]){
  // the first number has to be a positive integer
  if (argc< 2 ) { 
    printf("Error in arguments");
    return EXIT_FAILURE;
  }

  int n = atoi(args[1]);
  
  if (n < 0 ) {
    printf("n has to be a positive value") ;
    return EXIT_FAILURE; 
  }
  int value = factorial ( n, 1  );

  printf ("%d factorial: " , value ) ; 

  return EXIT_SUCCESS; 

}
