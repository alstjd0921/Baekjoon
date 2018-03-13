#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, i, j, sum = 0, MIN = 0;
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) {
        for (j = 0; j <= i; j++) {
            if (j * j == i) {
                if (MIN == 0) {
                    MIN = i;
                }
                sum += i;
                break;
            }
        }
    }

    if (sum == 0) {
        printf("-1");
    } else {
        printf("%d\n%d", sum, MIN);
    }

    return 0;
}