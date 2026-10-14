#include <stdio.h>
#include <string.h>

int main(){
  char word1[15];
  char word2[15];
  
  printf("Введите 2 слова: \n");
  scanf("%s %s", word1, word2 );

  printf("%s-%s\nTOTAL_LEN: %zu",
      word1,
      word2,
      strlen(word1) + strlen(word2));

  return 0; 
}
