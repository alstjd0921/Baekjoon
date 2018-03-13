#include <cstdio>
int main(int argc, const char *argv[]) {
  int current = 0;
  int max = 0;
  int in, out;
  for (int i = 0; i < 4; i++) {
    scanf("%d %d", &out, &in);
    current -= out;
    current += in;
    if (current > max) {
      max = current;
    }
  }
  printf("%d\n", max);
  return 0;
}