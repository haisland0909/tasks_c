#include <stdio.h>

int main(void)
{
    int  ch;
    FILE *fp;
    char fname[FILENAME_MAX];		/* ファイル名 */
    int row = 1;

    printf("ファイル名：");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL)					/* オープン */
        printf("\aファイルをオープンできません。\n");
    else {
        while ((ch = fgetc(fp)) != EOF) {
            if (ch == '\n') {
                row++;
            }
        }
        printf("%d行です。", row);
        fclose(fp);											/* クローズ */
    }

    return 0;
}
