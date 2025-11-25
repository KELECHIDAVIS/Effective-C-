#include <stdio.h>
#include <stdlib.h>

int main(){
  char str[11];
  for (int i = 0 ; i< 10 ; i++){
    str[i] = '0' + i ; 
  }
  str[10] = '\0' ; 
  printf("%s\n" , str) ; 
  return EXIT_SUCCESS; 
}
