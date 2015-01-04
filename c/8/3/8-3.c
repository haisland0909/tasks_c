#include <stdio.h>

#define swap(type, a, b) (a ^= b), (b ^= a), (a ^= b);

int main(void)
{
    int a, b;
    printf("整数aを入力してください：");
    scanf("%d", &a);
    printf("整数bを入力してください：");
    scanf("%d", &b);

    swap(int, a, b)

    printf("整数aは%dです\n", a);
    printf("整数bは%dです", b);

    return 0;
}
