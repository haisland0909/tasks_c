#include <stdio.h>

int main(void)
{
    FILE *fp;
    char file_name[128];

    printf("��������t�@�C���� : " );
    scanf("%128s", file_name);

    fp = fopen(file_name, "w");						/* �t�@�C���̃I�[�v�� */

    if (fp == NULL)
        printf("\a�t�@�C��\"%s\"�������ł��܂���ł����B\n", file_name);
    else {
        printf("\a�t�@�C��\"%s\"���������܂����B\n", file_name);
        fclose(fp);								/* �t�@�C���̃N���[�Y */
    }

    return 0;
}