#include <stdio.h>

int main(void)
{
    int i, j;
    int length;

    puts("正方形を作ります。");
    printf("長さ：");   scanf("%d", &length);

    for (i = 1; i <= length; i++) {         
        for (j = 1; j <= length; j++)        
            putchar('*');
        putchar('\n');                      /* 改行 */
    }
    return 0;
}
