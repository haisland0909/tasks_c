#include <stdio.h>

#define NUM 7

int main(void)
{
    int i;
    int x[NUM];                   /* int[7]型の配列 */

    for (i = 0; i < NUM; i++) {   /* 要素に値を読み込む */
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < NUM / 2; i++) {   /* 要素の並びを反転 */
        int temp = x[i];
        x[i]     = x[NUM - 1 - i];
        x[NUM - 1 - i] = temp;
    }

    puts("反転しました。");
    for (i = 0; i < NUM; i++)     /* 要素の値を表示 */
        printf("x[%d] = %d\n", i, x[i]);

    return 0;
}
