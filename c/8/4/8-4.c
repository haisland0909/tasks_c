
#include <stdio.h>

#define NUMBER  5       /* 人数 */

/*--- バブルソート ---*/
void bsort(int a[], int n)
{
    int i, j;

    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (a[j + 1] <  a[j]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(void)
{
    int i;
    int height[NUMBER];     /* NUMBER人の学生の身長 */

    printf("%d人の身長を入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("%2d番：", i + 1);
        scanf("%d", &height[i]);
    }

    bsort(height, NUMBER);      /* ソート */

    puts("昇順にソートしました。");
    for (i = 0; i < NUMBER; i++)
        printf("%2d番：%d\n", i + 1, height[i]);

    return 0;
}
