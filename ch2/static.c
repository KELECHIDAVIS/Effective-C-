#include <stdio.h>
#include <stdlib.h>

void increment (){
  unsigned static int counter = 0 ; // static makes this variable persist outside the function (gives file scope) 
  printf("%d " , counter ) ;
  counter++ ; 
  return ; 
} 

int main(){
  for ( int i = 0; i < 5 ; i++){
    increment(); 
  }
  return EXIT_SUCCESS; 
}
