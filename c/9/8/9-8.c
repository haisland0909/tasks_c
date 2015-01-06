#include <stdio.h>


int str_length(const char s[])
{
    int len = 0;

    while (s[len])
        len++;
    return len;
}

/*--- 文字列sを表示（改行はしない）---*/
void put_stringr(const char s[])
{
    int i;
    for(i = str_length(s); i > 0; i--)
        putchar(s[i - 1]);
}

int main(void)
{
    char str[128];

    printf("文字列を入力してください：");
    scanf("%s", str);

    printf("あなたは");
    put_stringr(str);
    printf("と入力しました。\n");

    return 0;
}
