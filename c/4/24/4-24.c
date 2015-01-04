#include <stdio.h>

int main(void)
{
    int i, j, max;
    int stair;
    puts("ピラミッドを作ります。");
    printf("段数：");   scanf("%d", &stair);
    max = stair * 2 - 1;
    for (i = 1; i <= stair; i++) {
        for (j = 1; j <= max; j++){
            if(j <= stair - i || j >= stair + i)
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');                      /* 改行 */
    }
    return 0;
}
