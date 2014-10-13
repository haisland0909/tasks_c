#include <stdio.h>

int main(void)
{
    int no1 , no2;
    printf("2つの整数を入力してください。\n整数x:");
    scanf("%d" , &no1);
    printf("整数y:");
    scanf("%d" , &no2);
    printf("xとyの和は%dです、xとyの積は%dです。" , no1 + no2 , no1 * no2);
    return 0;
}
