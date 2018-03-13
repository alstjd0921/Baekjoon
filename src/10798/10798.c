#include <stdio.h>

char arr[5][16];
char res[100];
int resptr = 0;

int main(int argc, const char *argv[]) {
  for (int i = 0; i < 5; ++i) {
    scanf("%s", arr[i]);
  }
  for (int i = 0; i < 16; ++i) {
    for (int j = 0; j < 5; ++j) {
      if (arr[j][i] == '\0') {
        continue;
      }
      res[resptr++] = arr[j][i];
    }
  }
  printf("%s", res);

  return 0;
}
