#include <stdio.h>

/*--- 文字列strの長さを返す ---*/
int str_char(const char s[], int c)
{
    int len = 0;

    while (s[len]){
        if (s[len] == c)
            return len + 1;
        len++;
    }
    return -1;
}

int main(void)
{
    char str[128];  /* ナル文字を含めて128文字まで格納できる */
    char needle[2];

    printf("文字列を入力してください：");
    scanf("%s", str);
    printf("検索文字を入力してください：");
    scanf("%s", needle);


    printf("文字列\"%s\"に\"%s\"は%d番目に出てきます。\n", str, needle,str_char(str, needle[0]));

    return 0;
}
