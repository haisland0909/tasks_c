#include <stdio.h>

int main(void)
{
    FILE *fp;
    char file_name[128];

    printf("消去するファイル名 : " );
    scanf("%128s", file_name);

    fp = fopen(file_name, "w");						/* ファイルのオープン */

    if (fp == NULL)
        printf("\aファイル\"%s\"を消去できませんでした。\n", file_name);
    else {
        printf("\aファイル\"%s\"を消去しました。\n", file_name);
        fclose(fp);								/* ファイルのクローズ */
    }

    return 0;
}