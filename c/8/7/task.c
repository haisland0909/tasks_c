#include <stdio.h>

int combination(int n, int r)
{
    int sum;
    if (r == 0 || n == r)
        sum = 1;
    else if (r == 1)
        sum = n;
    else
        sum = combination(n - 1, r - 1) + combination(n - 1, r);

    return sum;
}

int main(void)
{
    int n, r;
    printf("整数の数:");
    scanf("%d", &n);
    printf("取り出す数:");
    scanf("%d", &r);
    printf("組み合わせの数は%d", combination(n, r));

    return 0;
}
