#include <stdio.h>


int str_length(const char s[])
{
    int len = 0;

    while (s[len])
        len++;
    return len;
}

/*--- 文字列sを表示（改行はしない）---*/
void rev_strings(char s[])
{
    int i, half, len, temp;
    len  = str_length(s) - 1;
    half = (str_length(s) - 1) / 2;
    for(i = 0; i < half; i++){
        temp       = s[i];
        s[i]       = s[len - i];
        s[len - i] = temp;
    }
}

int main(void)
{
    char str[128];

    printf("文字列を入力してください：");
    scanf("%s", str);

    printf("あなたは");
    rev_strings(str);
    printf("%sと入力しました。\n", str);

    return 0;
}
