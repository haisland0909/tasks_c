#include <stdio.h>

int main(void)
{
    int i, j;
    int tensu[2][4][3] = { { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} } , { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} } };
    int sum[4][3];          /* 合計 */

    /* ２回分の点数の合計を求める */
    for (i = 0; i < 4; i++) {                           /* ４人分の */
        for (j = 0; j < 3; j++)                         /* ３科目の */
            sum[i][j] = tensu[0][i][j] + tensu[1][i][j];    /* ２回分を加算 */
    }

    /* １回目の点数を表示 */
    puts("１回目の点数");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", tensu[0][i][j]);
        putchar('\n');
    }

    /* ２回目の点数を表示 */
    puts("２回目の点数");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", tensu[1][i][j]);
        putchar('\n');
    }

    /* 合計点を表示 */
    puts("合計点");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", sum[i][j]);
        putchar('\n');
    }

    return 0;
}
