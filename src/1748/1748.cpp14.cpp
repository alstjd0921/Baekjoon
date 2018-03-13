#include <cstdio>

using namespace std;

int main(int argc, const char *argv[]) {
    int N, result = 0, jari = 1, cnt = 1;
    scanf("%d", &N);
    while (N >= jari * 10LL) {
        result = result + jari * 9 * cnt;
        cnt++;
        jari *= 10;
    }
    result = result + (N - jari + 1) * cnt;
    printf("%d\n", result);
    return 0;
}