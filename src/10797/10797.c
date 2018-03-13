#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, a, tmp, sum = 0;
    scanf("%d", &a);

    for (i = 0; i < 5; i++) {
        scanf("%d", &tmp);
        if (tmp == a) {
            sum++;
        }
    }
    printf("%d", sum);

    return 0;
}