#include <stdio.h>

int main() {
	int a, n, i, j, sum1 = 0, sum2 = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		sum1 = 0;
		scanf("%d", &a);

		for (j = a; j >= 1; j--) {
			if (a % j == 0) {
				sum1++;
			}
		}

		if (sum1 == 2) {
			sum2++;
		}
	}

	printf("%d", sum2);
	return 0;
}