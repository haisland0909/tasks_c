#include <stdio.h>

int main(void)
{
    char str[] = "ABC\0DEF";     /* {'A', 'B', 'C', '\0'}による初期化 */

    printf("文字列strは\"%s\"です。\n", str);   /* 表示 */

    return 0;
}
