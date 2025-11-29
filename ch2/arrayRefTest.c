#include <stdlib.h>
#include <stdio.h>


// CANT MODIFY STRING LITERALS THEY ARE READ ONLY 
// void pointerChange ( char *s , size_t n ) {
//   *s = 'c' ; // because a pointer to the first character is being passed 
//   s++; 
//   *s = 'h' ; // accessing the second character 
// }
void arrayChange (  size_t n ,  char s[n]  ) {
  s[0] = 'c' ; 
  s[1] = 'h' ; 
} 

int main(){
  char* s1 = "test" ;
  char s2[4] = "test" ;

  // pointerChange(s1, 4);
  arrayChange(4, s2) ;

  printf("Pointer Change: %s\n" ,s1) ;
  printf("Array Change: %s\n" ,s2) ;
} 
