#include <stdio.h>

int main(int argc, char const *argv[]) {
  char str[200];
  scanf("%s", str);

  int i, tmp = 1;

  while (str[tmp - 1] != 0) {
    if ((tmp - 1) % 10 == 0 && tmp - 1 != 0) {
      printf("\n");
    }
    printf("%c", str[tmp - 1]);
    tmp++;
  }

  return 0;
}
