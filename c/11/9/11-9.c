#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[128]  = {0};
    char str2[128] = {0};

    printf("������1�F");
    scanf("%s", str1);

    printf("������2�F");
    scanf("%s", str2);

    printf("������1�̒�����%d,������2�̒�����%d�B\n", strlen(str1), strlen(str2) );

    printf("������1�ɕ�����2��A�������%s\n", strcat(str1, str2));

    if (strcmp(str1, str2) > 0){
        printf("������1�͕�����2�����傫���ł�\n");
    } else {
        printf("������1�͕�����2�����������ł�\n");
    }
    strcpy(str1, str2);
    printf("������2�𕶎���1�ɃR�s�[���܂���\n");
    printf("������1�F%s\n", str1);
    printf("������2�F%s\n", str2);

    return 0;
}