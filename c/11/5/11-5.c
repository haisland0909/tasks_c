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

    printf("�����ΏہF");
    scanf("%s", str);

    printf("������F");
    scanf("%s", needle);

    printf("%s��%s��%d����܂��B", str, needle, str_chnum(str, *needle));

    return 0;
}