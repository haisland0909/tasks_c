#include <stdio.h>

int main(void)
{
    double no;
    printf("実数を入力してください。：");
    scanf("%lf" , &no);
    printf("あなたが入力したのは%fです。\n" , no);
    return 0;
}
