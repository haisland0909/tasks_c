#include <stdio.h>
#define NUM 5

int main(void)
{
    FILE *fp;
    char   name[100];			/* ���O */
    double height, weight;		/* �g���E�̏d */

    if ((fp = fopen("dt_dat", "w")) == NULL)				/* �I�[�v�� */
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    else {
        printf("%d�l�̏�����͂��Ă�������\n", NUM);
        for (size_t i = 0; i < NUM; i++)
        {
            printf("���O:");
            scanf("%s", name);
            printf("�g��:");
            scanf("%lf", &height);
            printf("�̏d:");
            scanf("%lf", &weight);
            fprintf(fp, "%s %lf %lf\n", name, height, weight);
        }
        
        fclose(fp);											/* �N���[�Y */
    }

    return 0;
}