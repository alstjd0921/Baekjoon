#include <stdio.h>

int main(int argc, char const *argv[]) {
    int Dp[1010];
    int n, i;
    Dp[0] = 1; Dp[1] = 1;

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        Dp[i] = (Dp[i - 1] + Dp[i - 2]) % 10007;
    }

    printf("%d\n", Dp[n] % 10007);

    return 0;
}