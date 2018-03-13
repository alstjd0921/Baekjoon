#include <stdio.h>

int main(int argc, char const *argv[]) {
  char c;
  while ((c = getchar()) != 10)
    putchar((23 + c - 65) % 26 + 65);
  return 0;
}
