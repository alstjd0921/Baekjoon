#include <algorithm>
#include <cstdio>
using namespace std;

int main(int argc, const char *argv[]) {
  int M, N, result = 64, if_W = 0, if_B = 0, before_res;
  char pan[100][100], start, tmp;
  scanf("%d %d", &N, &M);
  for (int i = 0; i < N; i++) {
    scanf("%s", &pan[i]);
  }
  for (int i = 0; i <= N - 8; i++) {
    for (int j = 0; j <= M - 8; j++) {
      if_W = 0;
      if_B = 0;
      for (int r = 0; r < 8; r++) {
        for (int c = 0; c < 8; c++) {
          if_W += ((r + 1) % 2 == (c + 1) % 2 ? 'W' : 'B') != pan[i + r][j + c];
          if_B += ((r + 1) % 2 == (c + 1) % 2 ? 'B' : 'W') != pan[i + r][j + c];
        }
      }
      before_res = min(if_W, if_B);
      result = min(result, before_res);
    }
  }
  printf("%d\n", result);
  return 0;
}
