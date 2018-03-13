#include <cstdio>

using namespace std;

int n, dp[101][10] = {0,};
// const int modnum = 1000000000;

int main(int argc, const char *argv[]) {
    scanf("%d", &n);
    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            dp[1][0] = 0;
        } else {
            dp[1][i] = 1;
        }
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            dp[i][j] = j;
            if (j == 0) {
                dp[i][j] = dp[i - 1][j + 1];
            } else if (j == 9) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = ((dp[i - 1][j - 1]) % 1000000000 +
                            (dp[i - 1][j + 1]) % 1000000000)
                           % 1000000000;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i <= 9; i++) {
        sum += dp[n][i] % 1000000000;
        sum %= 1000000000;
    }
    printf("%d\n", sum);
    return 0;
}

