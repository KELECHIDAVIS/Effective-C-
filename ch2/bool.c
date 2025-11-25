#include <stdio.h>
#include <stdlib.h>

bool arm_detonator(int);

int main(){
  bool armed = arm_detonator(3);
  if (armed){
    puts("missile armed"); 
  }else {
    puts("missile armed"); 
  }
  return EXIT_SUCCESS; 
}
