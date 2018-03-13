#include <cstdio>

using namespace std;

int main(int argc, const char *argv[]) {
  int A, B, V;
  scanf("%d %d %d", &A, &B, &V);
  if (A >= V) {
    puts("1");
  } else {
    printf("%d\n", (V - A) / (A - B) + ((V - A) % (A - B) > 0) + 1);
  }
  return 0;
}
