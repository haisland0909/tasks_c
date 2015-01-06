#include <stdio.h>

int main(void)
{
    int  ch;
    FILE *fp;
    char fname[FILENAME_MAX];		/* ファイル名 */
    int count = 0;

    printf("ファイル名：");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL)					/* オープン */
        printf("\aファイルをオープンできません。\n");
    else {
        while ((ch = fgetc(fp)) != EOF) {
            if (ch >= '0' && ch <= '9') {
                count++;
            }
        }
        printf("%d個です。", count);
        fclose(fp);											/* クローズ */
    }

    return 0;
}
