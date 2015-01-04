#include <stdio.h>

#define NUMBER  80      /* 人数の上限 */

int main(void)
{
    int i;
    int num;                /* 実際の人数 */
    int data[NUMBER];      /* 学生の点数 */


    printf("データ数：");

    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a1～%dで入力してください：", NUMBER);
    } while (num < 1 || num > NUMBER);

    for (i = 0; i < num; i++) {
        printf("%2d番：", i + 1);
        scanf("%d", &data[i]);
    }

    putchar('{');
    for (i = 0; i < num; i++) {
         printf("%d", data[i]);
         if(i < num - 1)
            printf(", ");
    }
    putchar('}');
}
