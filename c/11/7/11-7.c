/*
��������̉p����啶���^�������ɕϊ�
*/

#include <ctype.h>
#include <stdio.h>

/*--- ��������̉p����啶���ɕϊ� ---*/
void str_toupper(char *s)
{
    while (*s) {
        *s = toupper(*s);
        *s++;
    }
}

/*--- ��������̉p�����������ɕϊ� ---*/
void str_tolower(char *s)
{
    while (*s) {
        *s = tolower(*s);
        *s++;
    }
}

int main(void)
{
    char str[128];

    printf("���������͂��Ă��������F");
    scanf("%s", str);

    str_toupper(str);
    printf("�啶���F%s\n", str);

    str_tolower(str);
    printf("�������F%s\n", str);

    return 0;
}