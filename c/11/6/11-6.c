#include <stdio.h>

char *str_chr(const char *s, int c)
{
    while (*s) {
        if (*s == c) {

            return s;
        }
        *s++;
    }

    return NULL;
}

int main(void)
{
    char str[128]  = {0};
    char needle[2] = {0};

    printf("�����ΏہF");
    scanf("%s", str);

    printf("������F");
    scanf("%s", needle);

    printf("%s", str_chr(str, *needle));

    return 0;
}