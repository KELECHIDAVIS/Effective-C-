#include <stdio.h>
#include <stdlib.h>


unsigned static int counter = 0 ; // static makes this variable persist outside the function (gives file scope) 
void increment (){
  counter++ ; 
  printf("%d " , counter ) ;
  return ; 
}
unsigned int retrieve ( ) {
  return counter; 
}

int main(){
  for ( int i = 0; i < 5 ; i++){
    increment(); 
  } printf("\n") ;

  printf("Current counter: %d \n" ,counter); 
  return EXIT_SUCCESS; 
}
