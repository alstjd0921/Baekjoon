#include <cstdio>

int main(int argc, const char *argv[]) {
  long long A[90] = {1, 1, 2};
  int n, i;
  scanf("%d", &n);
  for (i = 3; i < n; ++i) {
    A[i] = A[i - 1] + A[i - 2];
  }
  printf("%lld", A[n - 1]);
  return 0;
}
