#include <math.h> 
#include <stdio.h>
#include <stdlib.h>
const char *show_classification(double x) {
  switch(fpclassify(x)) {
    case FP_INFINITE:  return "Inf";
    case FP_NAN:       return "NaN";
    case FP_NORMAL:    return "normal";
    case FP_SUBNORMAL: return "subnormal";
    case FP_ZERO:      return "zero";
    default:           return "unknown";
  } 
}

int main () {
  printf("%s" ,show_classification(1/0));
  printf("%s" ,show_classification(1/0));
  printf("%s" ,show_classification(1/0));
  printf("%s" ,show_classification(1/0));
  printf("%s" ,show_classification(1/0));
  
  return EXIT_SUCCESS;
}
