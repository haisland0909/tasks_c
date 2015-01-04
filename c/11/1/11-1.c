#include  <stdio.h>

int main(void)
{
    char  *ptr   = "123";

    ptr = "456" + 1;        /* 正しい：他の文字列リテラルを指す */

    printf("ptr = \"%s\"\n", ptr);

    return (0);
}
