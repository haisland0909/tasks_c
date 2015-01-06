/*
�T�l�̊w����g���̏����Ƀ\�[�g
*/

#include <stdio.h>
#include <string.h>

#define NUMBER		5		/* �w���̐l�� */
#define NAME_LEN	64		/* ���O�̕����� */

enum sortway
{
    Height,
    Name,
    Invalid
};

/*=== �w����\���\���� ===*/
typedef struct {
    char  name[NAME_LEN];	/* ���O */
    int   height;			/* �g�� */
    float weight;			/* �̏d */
    long  schols;			/* ���w�� */
} Student;

Student scan_student()
{
    Student temp;

    printf("���O:");
    scanf("%s", temp.name);
    printf("�g��:");
    scanf("%d", &temp.height);
    printf("�̏d:");
    scanf("%f", &temp.weight);
    printf("���w��:");
    scanf("%ld", &temp.schols);
    return temp;
}

/*--- x�����y���w���w�������� ---*/
void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

/*--- �w���̔z��a�̐擪n�̗v�f��g���̏����Ƀ\�[�g ---*/
void sort_by_name(Student a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (strcmp(a[j - 1].name, a[j].name) > 0) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }  
    }
}

void sort_by_height(Student a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--){
            if (a[j - 1].height > a[j].height){
                swap_Student(&a[j - 1], &a[j]);
            }             
        }
            
    }
}

enum sortway select(void)
{
    int tmp;

    do {
        printf("�\�[�g���@�@0�c�g���@1�c���O");
        scanf("%d", &tmp);
    } while (tmp < Height || tmp >= Invalid);
    return tmp;
}

int main(void)
{
    int i;
    Student std[5];
    printf("5�l�̊w���̏�����͂��Ă��������B\n");
    for (i = 0; i < NUMBER; i++) {
        printf("%d�l��\n", i + 1);
        std[i] = scan_student();
    }

    for (i = 0; i < NUMBER; i++)
        printf("%-8s %6d%6.1f%7ld\n",
        std[i].name, std[i].height, std[i].weight, std[i].schols);

    switch (select())
    {
        case Height :
            sort_by_height(std, NUMBER); puts("\n�g�����Ƀ\�[�g���܂����B"); break;
        case Name :
            sort_by_name(std, NUMBER); puts("\n���O���Ƀ\�[�g���܂����B"); break;
    }

    
    for (i = 0; i < NUMBER; i++)
        printf("%-8s %6d%6.1f%7ld\n",
        std[i].name, std[i].height, std[i].weight, std[i].schols);

    return 0;
}
