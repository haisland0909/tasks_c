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

    printf("ŒŸõ‘ÎÛF");
    scanf("%s", str);

    printf("ŒŸõŒêF");
    scanf("%s", needle);

    printf("%s‚É%s‚Í%dŒÂ‚ ‚è‚Ü‚·B", str, needle, str_chnum(str, *needle));

    return 0;
}