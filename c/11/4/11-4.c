#include <stdio.h>

void put_string(const char *s)
{
    printf("%s", s);

}

int main(void)
{
    char str[128];

    printf("表示するのは：");
    scanf("%128s", str);

    put_string(str);

    return 0;
}