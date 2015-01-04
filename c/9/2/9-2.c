#include <stdio.h>

int main(void)
{
    char str[] = "ABC";     /* {'A', 'B', 'C', '\0'}による初期化 */
    str[0]     = '\0';
    printf("文字列strは\"%s\"です。\n", str);   /* 表示 */

    return 0;
}
