#include <stdio.h>
#define NUM 5

int main(void)
{
    FILE *fp;
    char   name[100];			/* 名前 */
    double height, weight;		/* 身長・体重 */

    if ((fp = fopen("dt_dat", "w")) == NULL)				/* オープン */
        printf("\aファイルをオープンできません。\n");
    else {
        printf("%d人の情報を入力してください\n", NUM);
        for (size_t i = 0; i < NUM; i++)
        {
            printf("名前:");
            scanf("%s", name);
            printf("身長:");
            scanf("%lf", &height);
            printf("体重:");
            scanf("%lf", &weight);
            fprintf(fp, "%s %lf %lf\n", name, height, weight);
        }
        
        fclose(fp);											/* クローズ */
    }

    return 0;
}