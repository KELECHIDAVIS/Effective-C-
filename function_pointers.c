#include <stdio.h>
#include <stdlib.h> 


int add ( int a , int b ) {
  return a+b ; 
} 
int sub (int a, int b){
  return a-b ; 
} 
int mult (int a , int b){
  return a*b ;
} 

int main() {
  int (*fptrs[3])  (int , int ) ={ add ,sub , mult}; // create a function ptr array of 3, then assign the functions        

  int a =12 , b =4; 

  for ( int i = 0; i< 3; i++) {
    int value = fptrs[i](a, b); 
    printf("I = %d, value = %d\n" ,i,value) ; 
  } 
  return EXIT_SUCCESS; 
}
