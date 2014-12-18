#include <stdio.h>

int main(void)
{
    int no , end;
    do {
        printf("整数を入力してください：");
        scanf("%d", &no);

        if (no == 0)
            puts("その数は0です。");
        else if (no > 0)
            puts("その数は正です。");
        else
            puts("その数は負です。");
        printf("終了しますか？Yes-0,No-1：");
        scanf("%d", &end);

    } while (end == 1);

    return 0;
}
