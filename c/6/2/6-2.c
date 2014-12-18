#include <stdio.h>

int min3(int a, int b, int c)
{
    int min = a;
    if (min > b)
        min = b;
    if(min > c)
        min = c;
    return min;
}

int main(void)
{
    int n1, n2, n3;

    puts("三つの整数を入力してください。");
    printf("整数１：");   scanf("%d", &n1);
    printf("整数２：");   scanf("%d", &n2);
    printf("整数３：");   scanf("%d", &n3);
    printf("最小値は%dです。\n", min3(n1, n2, n3));

    return 0;
}
