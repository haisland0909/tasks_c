#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int ch;
    FILE *sfp;						/* �R�s�[���t�@�C�� */
    FILE *dfp;						/* �R�s�[��t�@�C�� */
    char sname[FILENAME_MAX];		/* �R�s�[���̃t�@�C���� */
    char dname[FILENAME_MAX];		/* �R�s�[��̃t�@�C���� */

    printf("�R�s�[���t�@�C�����F");   scanf("%s", sname);
    printf("�R�s�[��t�@�C�����F");   scanf("%s", dname);

    if ((sfp = fopen(sname, "r")) == NULL)			/* �R�s�[�����I�[�v�� */
        printf("\a�R�s�[���t�@�C�����I�[�v���ł��܂���B\n");
    else {
        if ((dfp = fopen(dname, "w")) == NULL)		/* �R�s�[����I�[�v�� */
            printf("\a�R�s�[��t�@�C�����I�[�v���ł��܂���B\n");
        else {
            while ((ch = fgetc(sfp)) != EOF) {
                fputc(tolower(ch), dfp);
            }
                
            fclose(dfp);						/* �R�s�[����N���[�Y */
        }
        fclose(sfp);							/* �R�s�[�����N���[�Y */
    }

    return 0;
}
