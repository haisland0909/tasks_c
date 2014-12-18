#include <stdio.h>

int sumup(int x)
{
    int sum = 0;
    for(int i = 1; i <= x; i++){
        sum += i;
    }
    return sum;
}

int main(void)
{
    int x;

    puts("整数を入力してください。");
    printf("整数x：");   scanf("%d", &x);

    printf("1からnまでの和は%dです。\n", sumup(x));

    return 0;
}
