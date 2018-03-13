#include <stdio.h>

short n, m, p, q;
short compair[101][101];

int main(int argc, const char *argv[]) {
  scanf("%hd%hd", &n, &m);
  for (short i = 0; i <= n; i++) {
    compair[i][i] = 1;
  }
  for (short i = 0; i < m; i++) {
    scanf("%hd %hd", &p, &q);
    compair[p][q] = 1;
  }
  for (short k = 1; k <= n; k++) {
    for (short i = 1; i <= n; i++) {
      if (compair[i][k]) {
        for (short j = 1; j <= n; j++) {
          if (compair[i][k] && compair[k][j]) {
            compair[i][j] = 1;
          }
        }
      }
    }
  }
  for (short i = 1; i <= n; i++) {
    for (short j = 1; j <= n; j++) {
      if (compair[i][j]) {
        compair[j][i] = 1;
      }
    }
  }
  for (short i = 1; i <= n; i++) {
    short cnt = 0;
    for (short j = 1; j <= n; j++) {
      if (compair[i][j]) {
        cnt++;
      }
    }
    printf("%hd\n", n - cnt);
  }

  return 0;
}