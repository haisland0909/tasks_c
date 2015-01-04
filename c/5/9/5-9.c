#include <stdio.h>

#define NUMBER  80      /* 人数の上限 */

int main(void)
{
    int i, j;
    int num;                /* 実際の人数 */
    int tensu[NUMBER];      /* 学生の点数 */
    int bunpu[11] = {0};    /* 点数の分布 */
    int max = 0;            /* 高さの最大値 */

    printf("人数を入力してください：");

    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a1～%dで入力してください：", NUMBER);
    } while (num < 1 || num > NUMBER);

    printf("%d人の点数を入力してください。\n", num);

    for (i = 0; i < num; i++) {
        printf("%2d番：", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a1～100で入力してください：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
        if(max < bunpu[tensu[i] / 10])
            max++;
    }

    puts("\n---分布グラフ---");

    for (i = 0; i < max; i++) {
        for (j = 0; j <= 10; j++){
            putchar(' ');
            if(bunpu[j] >= max - i)
                putchar('*');
            else
                putchar(' ');
            putchar(' ');
        }
        putchar('\n');
    }
    for (j = 0; j <= 10; j++){
        printf("---");
    }
    putchar('\n');
    for (j = 0; j <= 10; j++){
        printf("%3d" , j * 10);
    }

    return 0;
}
