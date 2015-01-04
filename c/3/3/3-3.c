#include <stdio.h>

int main(void)
{
    int no1;
    printf("整数を入力してください。\n整数x：");
    scanf("%d" , &no1);
    if (no1 < 0)
        printf("xの絶対値は%dです。\n" , -no1);
    else
        printf("xの絶対値は%dです。\n" , no1);
    return 0;
}
