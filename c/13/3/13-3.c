#include <stdio.h>
#include <string.h>

#define NUM 64

/*=== �w����\���\���� ===*/
typedef struct {
    char  name[100];	/* ���O */
    double   height;			/* �g�� */
    double weight;			/* �̏d */
} Member;

void swap_Member(Member *x, Member *y)
{
    Member temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Member a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--){
            if (a[j - 1].height > a[j].height){
                swap_Member(&a[j - 1], &a[j]);
            }
        }

    }
}

int main(void)
{
    FILE   *fp;
    int    ninzu = 0;			/* �l�� */
    char   name[100];			/* ���O */
    double height, weight;		/* �g���E�̏d */
    double hsum = 0.0;			/* �g���̍��v */
    double wsum = 0.0;			/* �̏d�̍��v */
    Member member[NUM];

    if ((fp = fopen("hw.dat", "r")) == NULL)				/* �I�[�v�� */
        printf("\a�t�@�C�����I�[�v���ł��܂���B\n");
    else {
        while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
            printf("%-10s %5.1f %5.1f\n", name, height, weight);
            member[ninzu].height = height;
            member[ninzu].weight = weight;
            strcpy(member[ninzu].name, name);
            hsum += height;
            wsum += weight;
            ninzu++;
            
        }

        printf("�g���ŕ��ёւ��܂�\n");
        sort_by_height(member, ninzu);
        for (size_t i = 0; i < ninzu; i++)
        {
            printf("%-10s %5.1f %5.1f\n", member[i].name, member[i].height, member[i].weight);
        }

        printf("----------------------\n");
        printf("����       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
        fclose(fp);											/* �N���[�Y */
    }

    return 0;
}