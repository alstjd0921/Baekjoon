#include <cstdio>

int n, i, j, ans, dp[10001][10];

int main(int argc, const char *argv[]) {
    scanf("%d", &n);
    for (i = 0; i <= 9; i++) {
        dp[1][i] = 1;
    }
    for (i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][0];
        for (j = 1; j <= 9; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 10007;
        }
    }
    for (i = 0; i <= 9; i++) {
        ans = (ans + dp[n][i]) % 10007;
    }
    printf("%d", ans);
    return 0;
}
