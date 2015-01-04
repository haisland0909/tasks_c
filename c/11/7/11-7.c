/*
文字列内の英字を大文字／小文字に変換
*/

#include <ctype.h>
#include <stdio.h>

/*--- 文字列内の英字を大文字に変換 ---*/
void str_toupper(char *s)
{
    while (*s) {
        *s = toupper(*s);
        *s++;
    }
}

/*--- 文字列内の英字を小文字に変換 ---*/
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

    printf("文字列を入力してください：");
    scanf("%s", str);

    str_toupper(str);
    printf("大文字：%s\n", str);

    str_tolower(str);
    printf("小文字：%s\n", str);

    return 0;
}