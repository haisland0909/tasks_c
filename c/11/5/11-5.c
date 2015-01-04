#include <stdio.h>

int str_chnum(const char *s, int c)
{
    int len = 0;
    while (*s) {
        if (*s == c) {
            len++;
        }
        *s++;
    }

    return len;
}

int main(void)
{
    char str[128]  = {0};
    char needle[2] = {0};

    printf("検索対象：");
    scanf("%s", str);

    printf("検索語：");
    scanf("%s", needle);

    printf("%sに%sは%d個あります。", str, needle, str_chnum(str, *needle));

    return 0;
}