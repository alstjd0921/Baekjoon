#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n, result = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%1d", &temp);
		result += temp;
	}
	printf("%d\n", result);


	return 0;
}