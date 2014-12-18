#include <stdio.h>

int main(void)
{
    int no , mod;

    printf("整数を入力してください：");
    scanf("%d", &no);
    mod = no % 2;
    switch(mod){
        case 0 :
            puts("その数は偶数です。");
            break;
        case 1 :
            puts("その数は奇数です。");
            break;
    }

    return 0;
}
