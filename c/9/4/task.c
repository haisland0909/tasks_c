#include <stdio.h>

/*--- 文字列strの長さを返す ---*/
void null_string(char s[])
{
    s[0] = '\0';
}

int main(void)
{
    char str[128];  /* ナル文字を含めて128文字まで格納できる */

    printf("文字列を入力してください：");
    scanf("%s", str);
    printf("文字列は\"%s\"です\n", str);
    null_string(str);
    printf("関数後の文字列は\"%s\"です", str);

    return 0;
}
