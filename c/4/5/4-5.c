#include <stdio.h>

int main(void)
{
    int i, no;

    printf("正の整数を入力してください：");
    scanf("%d", &no);

    i = 1;
    while (i <= no)
        printf("%d ", i++);     /* iの値を表示した後にインクリメント */
    if (no >= 1)
        printf("\n");               /* 改行 */

    return 0;
}
