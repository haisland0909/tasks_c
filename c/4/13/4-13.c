#include <stdio.h>

int main(void)
{
    int i, no , sum;
    no = 0;
    while (no <= 0){
        printf("正の整数n：");
        scanf("%d", &no);
    }
    sum = 0;
    for (i = 1; i <= no; i++)
        sum += i;
    printf("1から%dまでの和は%dです。\n" , no , sum);

    return 0;
}
