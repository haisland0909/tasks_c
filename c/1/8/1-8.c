#include <stdio.h>

int main(void)
{
    int no1 , no2;
    printf("整数を入力してください。");
    scanf("%d" , &no1);
    printf("整数を入力してください。");
    scanf("%d" , &no2);
    printf("それらの積は%dです。" , no1 * no2);
    return 0;
}
