#include <stdio.h>

int main(void)
{
    FILE *fp;
    double pi[10] = { 1.2, 1.3, 2.1, 2.2, 3.3, 3.4, 3, 6, 4.1, 4.2};

    for (size_t i = 0; i < 10; i++)
    {
        printf("�ϐ� pi[%d] = %lf\n",i , pi[i]);
    }

    /* ������ */
    if ((fp = fopen("PI.bin", "wb")) == NULL)		/* �I�[�v�� */
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    else {
        fwrite(&pi, sizeof(double), 10, fp);			/* pi���������� */
        fclose(fp);
    }												/* �N���[�Y */

    /* �ǎ�� */
    if ((fp = fopen("PI.bin", "rb")) == NULL)		/* �I�[�v�� */
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    else {
        fread(&pi, sizeof(double), 1, fp);			/* pi�ɓǂݎ�� */
        for (size_t i = 0; i < 10; i++)
        {
            printf("�t�@�C������ǂݎ�����ϐ� pi[%d] = %lf\n", i, pi[i]);
        }
        fclose(fp);									/* �N���[�Y */
    }

    return 0;
}
