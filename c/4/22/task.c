#include <stdio.h>

int main(void)
{
    int i, j;
    int height, width ,n1 ,n2;

    puts("長方形を作ります。");
    printf("辺1：");   scanf("%d", &n1);
    printf("辺2：");   scanf("%d", &n2);
    if(n1 > n2){
        width  = n1;
        height = n2;
    }else{
        width  = n2;
        height = n1;
    }

    for (i = 1; i <= height; i++) {         /* 長方形はheight行 */
        for (j = 1; j <= width; j++)        /* 各行にwidth個の'*'を表示 */
            putchar('*');
        putchar('\n');                      /* 改行 */
    }
    return 0;
}
