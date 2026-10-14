#include <stdio.h>
#include <string.h>

int main(){
  
  int width; 
  char str[10];

  printf("Введите целое число: ");
  scanf("%d", &width);

  printf("\nВведитие строку: ");
  scanf("%s", str);
  
  printf("%*s\n", width, str);
  printf("%-*s\n", width + 5, str); 

  return 0; 
}
