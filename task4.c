#include <stdio.h>
#include <string.h>

int main(){
  char str[12] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";
  
  printf("%s", str);
  printf("STRLEN: %zu\nSIZEOF: %zu\n",
      strlen(str) - 1,
      sizeof(str));
  return 0; 
}
