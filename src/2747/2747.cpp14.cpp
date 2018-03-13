#include <cstdio>
using namespace std;

int main(int argc, const char *argv[]) {
  long long fibo[100] = {0, 1};
  int n;
  scanf("%d", &n);
  for (int i = 2; i <= n; i++) {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
  }
  printf("%lld\n", fibo[n]);
  return 0;
}
