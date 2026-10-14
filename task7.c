#include <stdio.h>
#include <string.h>

#define LINUX_DISTRO "LinuxDistro"

int main() {
  const char RDATE[] = "2026";

  printf("DISTRO: %s\nRDATE: %s\nSTRLEN: %zu\nSIZEOF: %zu\n", LINUX_DISTRO, RDATE,
         strlen(LINUX_DISTRO), sizeof(LINUX_DISTRO));

  return 0;
}
