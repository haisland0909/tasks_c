#include <stdio.h>

int gcd(int n, int r)
{
    int low, high, res, remain;
    if (n > r) {
        low  = r;
        high = n;
    }
    else {
        low  = n;
        high = r;
    }
    remain = high;
    while (remain >= low ){
        remain -= low;
    }
    if (remain == 0)
        res = low;
    else
        res = gcd(low, remain);

    return res;
}

int main(void)
{
    int n, r;
    printf("縦:");
    scanf("%d", &n);
    printf("横:");
    scanf("%d", &r);
    printf("最大公約数は%d", gcd(n, r));

    return 0;
}
