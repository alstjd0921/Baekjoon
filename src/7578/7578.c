#include <stdio.h>
#define MACHINES 500001
#define N 1000001

int up[MACHINES];
int down[MACHINES];
int temp[MACHINES];
int tree[N];
int hash[N];

long long int sum(int *tree, int i) {
  long long int ret = 0;
  while (i > 0) {
    ret += tree[i];
    i -= (i & -i);
  }
  return ret;
}

void update(int *tree, int i, const int num, const unsigned int size) {
  while (i <= size) {
    tree[i] += num;
    i += (i & -i);
  }
}

int main(int argc, const char *argv[]) {
  int i, n;
  long long int ret = 0;

  scanf("%d", &n);

  for (i = 1; i <= n; ++i) {
    scanf("%d", &up[i]);
    hash[up[i]] = i;
  }

  for (i = 1; i <= n; ++i) {
    scanf("%d", &down[i]);
    update(tree, hash[down[i]], 1, N);
    ret += sum(tree, N) - sum(tree, hash[down[i]]);
  }
  printf("%lld", ret);

  return 0;
}
