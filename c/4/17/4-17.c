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
    for (i = 1; i <= no; i++){
        printf("%dの2乗は%dです。\n" , i , i * i);
    }

    return 0;
}
