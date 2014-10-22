#include <stdio.h>

int main(void)
{
    int no1 , no2;
    printf("2つの整数を入力してください。\n整数x：");
    scanf("%d" , &no1);
    printf("整数y：");
    scanf("%d" , &no2);
    if (no1 == no2)
        puts("xとyは等しいです。");
    else if (no1 < no2)
        puts("xはyより小さいです。");
    else
        puts("xはyより大きいです。");
    return 0;
}
