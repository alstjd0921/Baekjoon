#include <cstdio>
#include <cmath>

int met[101][2];

int main(int argc, const char *argv[]) {
	int n, m, l, k, i, j, c, c2, z, max = 0, t = 0;
	scanf("%d %d %d %d", &n, &m, &l, &k);
	for (i = 1; i <= k; ++i) {
		scanf("%d %d", &met[i][0], &met[i][1]);
	}
	for (i = 1; i <= k; ++i) {
		for (j = 1; j <= k; ++j) {
			c = 0;
			c2 = 0;
			for (z = 1; z <= k; ++z) {
				if (met[i][0] <= met[z][0] && met[i][0] + l >= met[z][0] && met[j][1] <= met[z][1] && met[j][1] + l >= met[z][1]) {
					c++;
				}
				if (met[i][0] >= met[z][0] && met[i][0] + l <= met[z][0] && met[j][1] >= met[z][1] && met[j][1] + l <= met[z][1]) {
					c2++;
				}
			}
			if (max < c) {
				max = c;
			}
			if (max < c2) {
				max = c2;
			}
		}
	}
	printf("%d", k - max);
	return 0;
}