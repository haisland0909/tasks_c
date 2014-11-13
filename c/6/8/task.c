#include <stdio.h>

#define NUMBER  5       /* 学生の人数 */

/*--- 要素数nの配列vの最小値を返す ---*/
int min_of(int v[], int n)
{
    int i;
    int min = v[0];

    for (i = 1; i < n; i++)
        if (v[i] < min)
            min = v[i];
    return min;
}

int main(void)
{
    int i;
    int mat[NUMBER];        /* 数学の点数 */
    int min_m;       /* 最低点 */

    printf("%d人の点数を入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf( "    数学：");         scanf("%d", &mat[i]);
    }
    min_m = min_of(mat, NUMBER);    /* 数学の最低点 */

    printf("数学の最低点＝%d\n", min_m);

    return 0;
}
