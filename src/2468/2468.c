#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int map[105][105], result, cnt, N;
int safe[105][105]; // 1이면 안전한 영역, 0이면 잠긴 영역

void flood_fill(int m, int n, int k) {
  if (map[m][n] <= k || safe[m][n] == 1 || m < 0 || n < 0 || m > N || n > N) {
    return;
  } else {
    safe[m][n] = 1;
    flood_fill(m - 1, n, k);
    flood_fill(m + 1, n, k);
    flood_fill(m, n + 1, k);
    flood_fill(m, n - 1, k);
  }
}

int main(int argc, const char *argv[]) {
  scanf("%d", &N);
  int i, j, k;
  for (i = 1; i <= N; ++i) {
    for (j = 1; j <= N; ++j) {
      scanf("%d", &map[i][j]);
    }
  }

  for (k = 0; k <= 100; ++k) {
    memset(safe, 0, sizeof(safe));
    for (i = 1; i <= N; ++i) {
      for (j = 1; j <= N; ++j) {
        if (safe[i][j] == 0 && map[i][j] > k) {
          flood_fill(i, j, k);
          cnt++;
        }
      }
    }
    result = cnt >= result ? cnt : result;
    cnt = 0;
  }

  printf("%d", result);
  return 0;
}
