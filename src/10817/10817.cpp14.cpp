#include <algorithm>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[]) {
  int i, arr[3];
  for (i = 0; i < 3; ++i) {
    scanf("%d", &arr[i]);
  }
  sort(arr, arr + 3);
  printf("%d\n", arr[1]);
  return 0;
}
