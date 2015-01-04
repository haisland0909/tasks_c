#include <stdio.h>

int main(void)
{
    int no1 , no2;
    printf("2つの整数を入力してください。\n整数x：");
    scanf("%d" , &no1);
    printf("整数y：");
    scanf("%d" , &no2);
    if (no1 % no2)
        puts("xはyの約数ではありません。");
    else
        puts("xはyの約数です。");
    return 0;
}
