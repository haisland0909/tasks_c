#include <stdio.h>

#define NUMBER  5       /* 学生の人数 */

int main(void)
{
    int i;
    int tensu[NUMBER][2];  /* NUMBER人の学生の点数 */
    int sum[2] = {0};
    int ave[2] = {0};

    printf("%d人の点数を入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("%2d番-国語：", i + 1);
        scanf("%d", &tensu[i][0]);
        printf("%2d番-数学：", i + 1);
        scanf("%d", &tensu[i][1]);
    }

    for (i = 0; i < NUMBER; i++) {
        sum[0] += tensu[i][0];
        sum[1] += tensu[i][1];
    }
    ave[0] = sum[0] / NUMBER;
    ave[1] = sum[1] / NUMBER;

    printf("合計点国語 - %d 数学 - %d\n", sum[0], sum[1]);
    printf("平均点国語 - %d 数学 - %d\n", ave[0], ave[1]);

    for (i = 0; i < NUMBER; i++) {
        printf("学生%d番合計点 - %d 平均点 - %d\n", i + 1, tensu[i][0] + tensu[i][1], (tensu[i][0] + tensu[i][1]) / 2);
    }

    return 0;
}
