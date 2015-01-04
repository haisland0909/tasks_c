#include <stdio.h>

#define diff(x, y)  (x - y)     
int main(void)
{
    int    x, y;

    printf("整数xを入力してください：");
    scanf("%d", &x);
    printf("整数yを入力してください：");
    scanf("%d", &y);

    printf("xとyの差は%dです", diff(x, y));

    return 0;
}
