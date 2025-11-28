#include <stdio.h>
#include <stdlib.h> 

unsigned long long factorial (int n  , unsigned long long accumulator ){
  if (n <= 1){
    return accumulator ; 
  }
  return factorial(n-1, n*accumulator); 
}

// 4! = 4*3*2*1 = 24; 
int main(int argc , char* args[]){
  // the first number has to be a positive integer
  if (argc< 2 ) { 
    printf("Error in arguments\n");
    return EXIT_FAILURE;
  }

  int n = atoi(args[1]);
  
  if (n < 0 ) {
    printf("n has to be a positive value \n") ;
    return EXIT_FAILURE; 
  }
  unsigned long long value = factorial ( n, 1  );

  printf ("%d! = %llu\n" ,n, value ) ; 

  return EXIT_SUCCESS; 

}
