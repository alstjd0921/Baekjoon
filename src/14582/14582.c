#include <stdio.h>

int a[20], aa, bb, i;

int main(int argc, char const *argv[]) {
  for (i = 0; i < 18; ++i) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < 9; ++i) {
    aa += a[i];
    if (aa > bb) {
      printf("Yes\n");
      return 0;
    }
    bb += a[i + 9];
  }
  printf("No\n");

  return 0;
}
