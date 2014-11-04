#include <stdio.h>

int main(void)
{
    int i, j, max;
    int stair, rev;
    puts("ピラミッドを作ります。");
    printf("段数：");   scanf("%d", &stair);
    max = stair * 2 - 1;
    for (i = 1; i <= stair; i++) {
        rev = stair - i + 1;
        for (j = 1; j <= max; j++){
            if(j <= stair - rev || j >= stair + rev)
                putchar(' ');
            else
                printf("%d" , i % 10);
        }
        putchar('\n');                      /* 改行 */
    }
    return 0;
}
