#include <stdio.h>

int main(int argc, const char *argv[]) {
	int arr[10000], n, x, i;
	scanf("%d %d", &n, &x);
	
	for(i=0; i<n; ++i) {
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < n; ++i) {
		if (arr[i] < x) {
			printf("%d ", arr[i]);
		}
	}
	
	return 0;
}