#include <stdio.h>

int main(void)
{
    FILE *fp;
    char file_name[128];

    printf("開くファイル名 : " );
    scanf("%128s", file_name);

    fp = fopen(file_name, "r");						/* ファイルのオープン */

    if (fp == NULL)
        printf("\aファイル\"%s\"をオープンできませんでした。\n", file_name);
    else {
        printf("\aファイル\"%s\"をオープンしました。\n", file_name);
        fclose(fp);								/* ファイルのクローズ */
    }

    return 0;
}