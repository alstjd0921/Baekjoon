#include <cstdio>
#include <cstring>

using namespace std;

int MOD = 1000000009;
int N, K, dp[1000000][8],
    next[8][3] = {{1, 0, 0}, {1, 2, 0}, {3, 0, 4}, {1, 5, 0},
                  {1, 6, 0}, {3, 0, 7}, {1, 0, 7}, {7, 7, 7}};

int cnt(int p, int q) {
  if (q == 7) {
    return 0;
  }
  if (p == N) {
    return 1;
  }
  int &ret = dp[p][q];
  if (ret != -1) {
    return ret;
  }
  ret = 1LL * (K - 3) * cnt(p + 1, 0) % MOD;
  for (int i = 0; i < 3; ++i) {
    ret = ((ret + cnt(p + 1, next[q][i])) % MOD);
  }
  return ret;
}

int main(int argc, const char *argv[]) {
  scanf("%d %d", &N, &K);
  memset(dp, -1, sizeof(dp));
  printf("%d\n", cnt(0, 0));
  return 0;
}