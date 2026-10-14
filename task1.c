#include <stdio.h>
#include <string.h>


int main(){
  char arr[20] = "SibSUTIS";
  printf("SIZEOF: %zu\nSTRLEN: %zu\nFREE_BYTES: %zu",
      sizeof(arr),
      strlen(arr),
      sizeof(arr) - strlen(arr) - 1);

  return 0; 
}
