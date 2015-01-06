#include <time.h>
#include <stdio.h>

char data_file[] = "datetime.dat";				/* �t�@�C���� */

/*--- �O��̓��t�E�������擾�E�\�� ---*/
void get_data(void)
{
    FILE *fp;

    if ((fp = fopen(data_file, "r")) == NULL)				/* �I�[�v�� */
        printf("�{�v���O���������s����̂͏��߂Ăł��ˁB\n");
    else {
        int year, month, day, h, m, s;

        //fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
        fread(&year, sizeof(year), 1, fp);
        fread(&month, sizeof(month), 1, fp);
        fread(&day, sizeof(day), 1, fp);
        fread(&h, sizeof(h), 1, fp);
        fread(&m, sizeof(m), 1, fp);
        fread(&s, sizeof(s), 1, fp);
        printf("�O���%d�N%d��%d��%d��%d��%d�b�ł����B\n",year + 1900, month + 1, day, h, m, s);
        fclose(fp);											/* �N���[�Y */
    }
}

/*--- ����̓��t�E�������������� ---*/
void put_data(void)
{
    FILE *fp;
    time_t current = time(NULL);				/* ���݂̗�� */
    struct tm *timer = localtime(&current);		/* �v�f�ʂ̎����i�n�����j*/

    if ((fp = fopen(data_file, "w")) == NULL)				/* �I�[�v�� */
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
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
        fclose(fp);											/* �N���[�Y */
    }
}

int main(void)
{
    get_data();			/* �O��̓��t�E�������擾�E�\�� */

    put_data();			/* ����̓��t�E�������������� */

    return 0;
}