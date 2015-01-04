#include <stdio.h>

void alert(int x)
{
    for(int i = 1; i <= x; i++){
        putchar('\a');
    }
}

int main(void)
{
    int x;

    puts("整数を入力してください。");
    printf("整数x：");   scanf("%d", &x);

    alert(x);

    return 0;
}
