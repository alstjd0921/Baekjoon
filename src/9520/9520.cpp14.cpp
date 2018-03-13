#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int N, dist[1501][1501], dp[1501][1501];

int NP_hard(int s, int e, int n) {
  int &ret = dp[s][e];
  if (ret != -1) {
    return ret;
  }
  if (n == 0) {
    return ret = dist[s][e];
  }
  return ret = min(NP_hard(n - 1, e, n - 1) + dist[s][n - 1],
                   NP_hard(s, n - 1, n - 1) + dist[n - 1][e]);
}

int main(int argc, const char *argv[]) {
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &dist[i][j]);
    }
  }
  memset(dp, -1, sizeof(dp));
  printf("%d\n", NP_hard(N, N, N));

  return 0;
}
