#include <stdio.h>

int main(void)
{
    FILE *fp;
    double pi[10] = { 1.2, 1.3, 2.1, 2.2, 3.3, 3.4, 3, 6, 4.1, 4.2};

    for (size_t i = 0; i < 10; i++)
    {
        printf("変数 pi[%d] = %lf\n",i , pi[i]);
    }

    /* 書込み */
    if ((fp = fopen("PI.bin", "wb")) == NULL)		/* オープン */
        printf("\aファイルをオープンできません。\n");
    else {
        fwrite(&pi, sizeof(double), 10, fp);			/* piを書き込む */
        fclose(fp);
    }												/* クローズ */

    /* 読取り */
    if ((fp = fopen("PI.bin", "rb")) == NULL)		/* オープン */
        printf("\aファイルをオープンできません。\n");
    else {
        fread(&pi, sizeof(double), 1, fp);			/* piに読み取る */
        for (size_t i = 0; i < 10; i++)
        {
            printf("ファイルから読み取った変数 pi[%d] = %lf\n", i, pi[i]);
        }
        fclose(fp);									/* クローズ */
    }

    return 0;
}
