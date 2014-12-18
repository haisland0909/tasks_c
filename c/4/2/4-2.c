#include <stdio.h>

int main(void)
{
    int no1, no2, tmp, min, max, sum;
    printf("整数を入力してください：");
    scanf("%d", &no1);
    printf("整数を入力してください：");
    scanf("%d", &no2);
    if (no1 > no2){
        max = no1;
        min = no1;
    }else{
        max = no2;
        min = no1;
    }
    tmp = min;
    sum = tmp;
    do {
        tmp = tmp + 1;
        sum = sum + tmp;
    } while (tmp < max);
    printf("%d以上%d以下の全整数の和は%dです。" , min , max , sum);
    return 0;
}
