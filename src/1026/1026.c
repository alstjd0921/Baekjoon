#include <stdio.h>
#include <stdlib.h>

int asc(int *a, int *b)
{
	if (*a > *b)
		return 1;
	else if (*a < *b)
		return -1;
	else
		return 0;
}

int desc(int *a, int *b)
{
	if (*a < *b)
		return 1;
	else if (*a > *b)
		return -1;
	else
		return 0;
}

int main() {
	int i, N, arr1[51], arr2[51], sum = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &arr1[i]);
	} 
	for (i = 0; i < N; i++) {
		scanf("%d", &arr2[i]);
	}

	qsort(arr1, N, sizeof(int), asc);
	qsort(arr2, N, sizeof(int), desc);

	for (i = 0; i < N; i++) {
		sum += arr1[i] * arr2[i];
	}
	printf("%d\n", sum);

	return 0;
}