#include <cstdio>

long long int dp[10000] = {
        1, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9,
};

int main(int argc, const char *argv[]) {
    int tc, n, i;
    for (i = 6; i <= 100; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &tc);
        printf("%lld\n", dp[tc]);
    }
    return 0;
}