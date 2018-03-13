#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x1, x2, r1, r2, y1, y2, T, cnt, i;
  scanf("%d", &T);

  for (i = 1; i <= T; ++i) {
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    if (x1 == x2 && y1 == y2) {
      if (r1 == r2) {
        cnt = -1;
      } else {
        cnt = 0;
      }
    } else {
      if (r1 < r2) {
        int tmp = r2;
        r2 = r1;
        r1 = tmp;
      }
      double d = sqrt((double)(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
      if (d > r1 - r2 && d < r1 + r2) {
        cnt = 2;
      } else if (d == r1 + r2 || d == r1 - r2) {
        cnt = 1;
      } else {
        cnt = 0;
      }
    }
    printf("%d\n", cnt);
  }

  return 0;
}
