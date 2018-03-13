#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int main(int argc, const char *argv[]) {
  int n, i, cur;
  vector<int> last(1, 0);
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &cur);
    if (last.back() < cur) {
      last.push_back(cur);
    } else {
      *lower_bound(last.begin(), last.end(), cur) = cur;
    }
  }
  printf("%d\n", last.size() - 1);
  return 0;
}
