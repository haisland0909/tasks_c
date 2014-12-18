#include <stdio.h>

int main(void)
{
    int i;
    int v[5] = {5, 4, 3, 2, 1};     /* 初期化 */

    for (i = 0; i < 5; i++)         /* 要素の値を表示 */
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}
