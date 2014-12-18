#include <stdio.h>

/*--- xの4乗値を返す ---*/
int sqr(int x)
{
    return x * x;
}

int pow4(int x)
{
    return sqr(x) * sqr(x);
}

int main(void)
{
    int x;

    puts("整数を入力してください。");
    printf("整数x：");   scanf("%d", &x);

    printf("xの4乗は%dです。\n", pow4(x));

    return 0;
}
