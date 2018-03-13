#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

int N, A[1000], dp[1000], result = 0;

int LIS(int pos) {
  if (pos == N) {
    return 0;
  }
  int &ret = dp[pos];
  if (ret != -1) {
    return ret;
  }
  ret = 0;
  for (int i = pos + 1; i < N; i++) {
    if (A[i] > A[pos]) {
      ret = max(ret, LIS(i));
    }
  }
  return ret += A[pos];
}

int main(int argc, const char *argv[]) {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    scanf("%d", A + i);
  }
  memset(dp, -1, sizeof(dp));
  for (int i = 0; i < N; ++i) {
    result = max(result, LIS(i));
  }
  printf("%d\n", result);
  return 0;
}
