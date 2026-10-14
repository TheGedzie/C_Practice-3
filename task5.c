#include <stdio.h>

int main(){

  char symbol;

  printf("Введите строчную букву: ");
  scanf("%c", &symbol);

  printf("CODE_DEC: %d\nCODE_HEX: %x\nCODE_OCT: %o\nUPPER: %c\nNEXT: %c\nPREV: %c\n",
      symbol,
      symbol,
      symbol,
      symbol - 32,
      symbol + 1,
      symbol - 1);

  return 0; 
}
