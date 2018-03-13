#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return (*(int *)a) - (*(int *)b); }

int main(int argc, char const *argv[]) {
  int n, i;
  scanf("%d", &n);
  int arr[n];

  for (i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
  }

  qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);

  for (i = 0; i < n; ++i) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
