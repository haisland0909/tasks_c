
#include <stdio.h>

int main(void)
{
    int no , base;

    printf("正の整数を入力してください：");
    scanf("%d", &base);
    no = base;
    while (no >= 0) {
        printf("%d ", no);
        no--;           /* noの値をデクリメント */
    }
    if(base >= 0)
        printf("\n");       /* 改行 */
    return 0;
}
