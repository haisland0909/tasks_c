#include <time.h>
#include <stdio.h>

char data_file[] = "datetime.dat";				/* ファイル名 */

/*--- 前回の日付・時刻を取得・表示 ---*/
void get_data(void)
{
    FILE *fp;

    if ((fp = fopen(data_file, "r")) == NULL)				/* オープン */
        printf("本プログラムを実行するのは初めてですね。\n");
    else {
        int year, month, day, h, m, s;

        //fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
        fread(&year, sizeof(year), 1, fp);
        fread(&month, sizeof(month), 1, fp);
        fread(&day, sizeof(day), 1, fp);
        fread(&h, sizeof(h), 1, fp);
        fread(&m, sizeof(m), 1, fp);
        fread(&s, sizeof(s), 1, fp);
        printf("前回は%d年%d月%d日%d時%d分%d秒でした。\n",year + 1900, month + 1, day, h, m, s);
        fclose(fp);											/* クローズ */
    }
}

/*--- 今回の日付・時刻を書き込む ---*/
void put_data(void)
{
    FILE *fp;
    time_t current = time(NULL);				/* 現在の暦時刻 */
    struct tm *timer = localtime(&current);		/* 要素別の時刻（地方時）*/

    if ((fp = fopen(data_file, "w")) == NULL)				/* オープン */
        printf("\aファイルをオープンできません。\n");
    else {
        /*
        fprintf(fp, "%d %d %d %d %d %d\n",
            timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
            timer->tm_hour, timer->tm_min, timer->tm_sec);
        */
        fwrite(&timer->tm_year, sizeof(timer->tm_year), 1, fp);
        fwrite(&timer->tm_mon, sizeof(timer->tm_mon), 1, fp);
        fwrite(&timer->tm_mday, sizeof(timer->tm_mday), 1, fp);
        fwrite(&timer->tm_hour, sizeof(timer->tm_hour), 1, fp);
        fwrite(&timer->tm_min, sizeof(timer->tm_min), 1, fp);
        fwrite(&timer->tm_sec, sizeof(timer->tm_sec), 1, fp);
        fclose(fp);											/* クローズ */
    }
}

int main(void)
{
    get_data();			/* 前回の日付・時刻を取得・表示 */

    put_data();			/* 今回の日付・時刻を書き込む */

    return 0;
}