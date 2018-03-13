#include <cstdio>
#include <cstring>
using namespace std;

int dp[11];

int pos(int spare) {
  int &ret = dp[spare];
  if (ret) {
    return ret;
  }
  if (spare <= 1) {
    return ret = 1;
  }
  ret = pos(spare - 1) + pos(spare - 2);
  if (spare >= 3) {
    ret += pos(spare - 3);
  }
  return ret;
}

int main(int argc, const char *argv[]) {
  int T, n;
  scanf("%d", &T);
  for (int i = 0; i < T; i++) {
    scanf("%d", &n);
    memset(dp, 0, sizeof(dp));
    printf("%d\n", pos(n));
  }
  return 0;
}
