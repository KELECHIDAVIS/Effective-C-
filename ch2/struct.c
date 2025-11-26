#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

struct person {
  char name[10] ; 
  int age ; 
}; 

enum day { sun , mon , tues, weds, thurs, fri, sat} ;


int main() {
  struct person kelechi; 
  strcpy(kelechi.name,"kelechi"); 
  kelechi.age = 21 ;
  printf("name: %s , age: %d\n", kelechi.name,kelechi.age);
  enum day tommorrow = weds ; 
  printf("tommorrow: %d\n " ,tommorrow) ; 

  return EXIT_SUCCESS;
}
