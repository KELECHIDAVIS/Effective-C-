#include <limits.h> 
#include <stdlib.h> 
#include <stdio.h> 

int absolute_value(int a) {
  if (a < 0) {
    return a == INT_MIN ? INT_MAX : -a;  
  }
  return a;
} 

int main (int argc , char* args[] ) {
  
  if(argc != 2 ) {
    printf("Invalid number of inputs. Input 1 integer\n") ; 
 
    return -1 ; 
  } 

  
  int num = atoi (args[1]) ;

  int abs = absolute_value(num) ;

  printf("Absolute value of %d: %d \n", num , abs) ;
  return 0 ; 
}
