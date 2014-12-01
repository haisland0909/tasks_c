#include <stdio.h>

/*--- 文字列sを表示（改行はしない）---*/
void put_string(const char s[])
{
    int i = 0;
    while (s[i])
        putchar(s[i++]);
}

void put_stringn(const char s[], int n)
{
    int i = 0;
    for(i = 0; i < n; i++)
        put_string(s);
}

int main(void)
{
    char str[128];
    int n;

    printf("文字列を入力してください：");
    scanf("%s", str);
    printf("繰り返し回数：");
    scanf("%d", &n);

    printf("あなたは");
    put_stringn(str, n);
    printf("と入力しました。\n");

    return 0;
}
