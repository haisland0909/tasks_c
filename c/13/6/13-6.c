#include <stdio.h>

int main(void)
{
    int  ch;
    FILE *fp;
    char fname[FILENAME_MAX];		/* �t�@�C���� */
    int row = 1;

    printf("�t�@�C�����F");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL)					/* �I�[�v�� */
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    else {
        while ((ch = fgetc(fp)) != EOF) {
            if (ch == '\n') {
                row++;
            }
        }
        printf("%d�s�ł��B", row);
        fclose(fp);											/* �N���[�Y */
    }

    return 0;
}
