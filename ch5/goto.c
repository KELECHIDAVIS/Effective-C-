#include <stdio.h> 
#include <stddef.h>
#include <stdlib.h> 

enum FailValues {
  fail1, fail2, failObj , successful
} ; 
int do_something(void) {
  FILE *file1, *file2;
  int *obj;
  int ret_val = successful; // initially assume a successful return value

  file1 = fopen("a_file", "w"); 
  if (!file1) {
    return fail1;  
  }

  file2 = fopen("another_file", "w");
  if (!file2 ) {
    ret_val = fail2;
    goto FAIL_FILE2;
  }

  obj = malloc(sizeof(*obj));
  if (!obj ) {
    ret_val = failObj;
    goto FAIL_OBJ;
  }

  // operate on allocated resources

  // clean up everything
  free(obj);
FAIL_OBJ:  // otherwise, close only the resources we opened
  fclose(file2);  
  
FAIL_FILE2:
  fclose(file1);
  return ret_val;
} 

int main() { 
  enum FailValues ret_val = do_something(); 
  switch ( ret_val){
    case failObj: 
      printf("Object Failed") ; 
      break;
    case fail1: 
      printf("File1 Failed") ; 
      break; 
    case fail2: 
      printf("File2 Failed") ; 
      break;
    case successful: 
      printf("Successful Run") ; 
      break;
  }

  return 0; 
}
