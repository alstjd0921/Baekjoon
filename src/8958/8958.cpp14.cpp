#include <cstdio>
#include <cstring>

char str[999999];

int main(int argc, char const *argv[]) {
  int a, tmp = 0, result = 0;
  scanf("%d", &a);
  while (a--) {
    result = 0;
    tmp = 0;
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
      switch (str[i]) {
      case 'O':
        tmp++;
        result += tmp;
        break;
      case 'X':
        tmp = 0;
        break;
      }
    }
    printf("%d\n", result);
  }
  return 0;
}
