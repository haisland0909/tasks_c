#include <stdio.h>

#define NAME_LEN	64		/* ���O�̕����� */

/*=== �w����\���\���� ===*/
struct student {
    char  name[NAME_LEN];	/* ���O */
    int   height;			/* �g�� */
    float weight;			/* �̏d */
    long  schols;			/* ���w�� */
};

int main(void)
{
    struct student takao = { "Takao", 173, 86.2 };

    printf("���@�� �� %s, �A�h���X �� %p\n", takao.name, &takao.name);
    printf("�g�@�� �� %d, �A�h���X �� %p\n\n", takao.height, &takao.height);
    printf("�́@�d �� %.1f, �A�h���X �� %p\n\n", takao.weight, &takao.weight);
    printf("���w�� �� %ld, �A�h���X �� %p\n\n", takao.schols, &takao.schols);

    return 0;
}