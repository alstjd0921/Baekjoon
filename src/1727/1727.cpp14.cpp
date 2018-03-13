#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int N, M, *A, *B, m[1000], fem[1000], dp[1000][1000];

int fjfj(int a, int b) {
    if (a == N) {
        return 0;
    }
    int &ret = dp[a][b];
    if (ret != -1) {
        return ret;
    }
    ret = fjfj(a + 1, b + 1) + abs(A[a] - B[b]);
    if (N - a < M - b) {
        ret = min(ret, fjfj(a, b + 1));
    }
    return ret;
}

int main(int argc, const char *argv[]) {
    int i;
    scanf("%d %d", &N, &M);
    for (i = 0; i < N; i++) {
        scanf("%d", m + i);
    }
    for (i = 0; i < M; i++) {
        scanf("%d", fem + i);
    }
    sort(m, m + N);
    sort(fem, fem + M);
    A = m;
    B = fem;
    if (N > M) {
        swap(N, M);
        swap(A, B);
    }
    memset(dp, -1, sizeof(dp));
    printf("%d\n", fjfj(0, 0));
    return 0;
}