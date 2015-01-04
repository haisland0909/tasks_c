#include <stdio.h>

#define NUM 7

void intary_copy(int v1[] , const int v2[], int n){
    int i;
    for (i = 0; i < NUM / 2; i++) {   /* 要素の並びを反転 */
        int temp        = v2[i];
        v1[i]           = v2[NUM - 1 - i];
        v1[NUM - 1 - i] = temp;
    }

    puts("反転しました。");
}

int main(void)
{
    int i;
    int v2[NUM];                   /* int[7]型の配列 */
    int v1[NUM];

    for (i = 0; i < NUM; i++) {   /* 要素に値を読み込む */
        printf("v2[%d] : ", i);
        scanf("%d", &v2[i]);
    }

    intary_copy(v1, v2, NUM);

    for (i = 0; i < NUM; i++)     /* 要素の値を表示 */
        printf("v1[%d] = %d\n", i, v1[i]);
    return 0;
}
