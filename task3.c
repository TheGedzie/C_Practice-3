#include <stdio.h>
#include <string.h>

int main(void) {
  char name[20];
  printf("Введите имя пользователя: ");
  scanf("%s", name);

  printf("\"%s\"\n"
         "\"%20s\"\n"
         "\"%-20s\"\n"
         "\"%*s%*s\"\n",
         name, name, name, (int)strlen(name) + 5, name, (int)strlen(name), "");

  return 0;
}
