#include <stdio.h>

int main(void)
{
    int no , tmp;

    printf("正の整数を入力してください：");
    scanf("%d", &no);
    tmp = no;

    while (tmp >= 1)
        printf("%d ", tmp--);    /* noの値を表示した後にデクリメント */
    if (no >= 1)
        printf("\n");               /* 改行 */

    return 0;
}
