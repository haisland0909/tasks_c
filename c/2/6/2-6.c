#include <stdio.h>

int main(void)
{
    int no;
    printf("身長を入力してください。:");
    scanf("%d" , &no);
    printf("あなたの標準体重は%.1fです。\n" , ( no - 100 ) * 0.9 );
    return 0;
}
