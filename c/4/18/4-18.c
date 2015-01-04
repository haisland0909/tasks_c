#include <stdio.h>

int main(void)
{
    int no , i;
    i = 0;
    printf("正の整数：");
    scanf("%d", &no);

    while (i++ < no){
        putchar('*');
        if (i % 5 == 0)
            putchar('\n');
    }

    return 0;
}
