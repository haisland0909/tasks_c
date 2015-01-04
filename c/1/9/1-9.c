#include <stdio.h>

int main(void)
{
    int no1 , no2 , no3;
    printf("整数を入力してください。");
    scanf("%d" , &no1);
    printf("整数を入力してください。");
    scanf("%d" , &no2);
    printf("整数を入力してください。");
    scanf("%d" , &no3);
    printf("それらの和は%dです。" , no1 + no2 + no3);
    return 0;
}
