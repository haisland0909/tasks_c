#include <stdio.h>

int main(void)
{
    int  ch;
    FILE *fp;
    char fname[FILENAME_MAX];		/* �t�@�C���� */
    int count = 0;

    printf("�t�@�C�����F");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL)					/* �I�[�v�� */
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    else {
        while ((ch = fgetc(fp)) != EOF) {
            if (ch >= '0' && ch <= '9') {
                count++;
            }
        }
        printf("%d�ł��B", count);
        fclose(fp);											/* �N���[�Y */
    }

    return 0;
}
