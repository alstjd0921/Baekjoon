#include <stdio.h>
#include <string.h>

int pipe_cnt(char *arr) {
  int result = 0, tmp = 0, i, j;

  for (i = 0; i < strlen(arr); ++i) {
    if (arr[i] == '(' && arr[i + 1] == ')') {
      result += tmp;
      i = i + 1;
    } else if (arr[i] == '(') {
      result++;
      tmp++;
    } else if (arr[i] == ')') {
      tmp--;
    } else {
      return result;
    }
  }

  return result;
}

int main(int argc, char const *argv[]) {
  char arr[100001];
  scanf("%s", arr);

  printf("%d\n", pipe_cnt(arr));

  return 0;
}
