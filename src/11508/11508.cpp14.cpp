#include <algorithm>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, i, sum = 0, c[100001];
  scanf("%d", &n);

  for (i = 0; i < n; ++i) {
    scanf("%d", &c[i]);
    sum += c[i];
  }

  std::sort(c, c + n);

  for (i = n - 3; i >= 0; i -= 3) {
    sum -= c[i];
  }

  for (i = 0; i < i % 3; ++i) {
    sum -= c[i];
  }

  printf("%d", sum);

  return 0;
}