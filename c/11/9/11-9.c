#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[128]  = {0};
    char str2[128] = {0};

    printf("文字列1：");
    scanf("%s", str1);

    printf("文字列2：");
    scanf("%s", str2);

    printf("文字列1の長さは%d,文字列2の長さは%d。\n", strlen(str1), strlen(str2) );

    printf("文字列1に文字列2を連結すると%s\n", strcat(str1, str2));

    if (strcmp(str1, str2) > 0){
        printf("文字列1は文字列2よりも大きいです\n");
    } else {
        printf("文字列1は文字列2よりも小さいです\n");
    }
    strcpy(str1, str2);
    printf("文字列2を文字列1にコピーしました\n");
    printf("文字列1：%s\n", str1);
    printf("文字列2：%s\n", str2);

    return 0;
}