#include <stdio.h>

int n, m, p, q;
short compair[101][101];

int main(int argc, const char *argv[]) {
  scanf("%d%d", &n, &m);
  for (int i = 0; i <= n; i++) {
    compair[i][i] = 1;
  }
  for (int i = 0; i < m; i++) {
    scanf("%d %d", &p, &q);
    compair[p][q] = 1;
  }
  for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
      if (compair[i][k]) {
        for (int j = 1; j <= n; j++) {
          if (compair[i][k] && compair[k][j]) {
            compair[i][j] = 1;
          }
        }
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (compair[i][j]) {
        compair[j][i] = 1;
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    int cnt = 0;
    for (int j = 1; j <= n; j++) {
      if (compair[i][j]) {
        cnt++;
      }
    }
    printf("%d\n", n - cnt);
  }

  return 0;
}
