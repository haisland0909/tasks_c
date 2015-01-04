#include <stdio.h>
#include <ctype.h>

/*--- 文字列sを表示（改行はしない）---*/
void del_digit(char s[])
{
    int real_i = 0;
    int i = 0;
    int temp;
    while (s[i]) {
        if (toupper(s[i]) == tolower(s[i])){
            s[i] = '\0'; 
        } else {
            temp = s[i];
            s[i] = '\0';
            s[real_i] = temp;
            real_i++;
        }
        i++;
    }
}

int main(void)
{
    char str[128];

    printf("文字列を入力してください：");
    scanf("%s", str);

    printf("あなたは");
    del_digit(str);
    printf("%sと入力しました。\n", str);

    return 0;
}
