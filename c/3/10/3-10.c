#include <stdio.h>

int main(void)
{
    int n1, n2, n3, c12 , c13 , c23;

    puts("三つの整数を入力してください。");
    printf("整数１：");   scanf("%d", &n1);
    printf("整数２：");   scanf("%d", &n2);
    printf("整数３：");   scanf("%d", &n3);
    c12 = n1 == n2;
    c13 = n1 == n3;
    c23 = n2 == n3;
    if(c12 && c13)
        puts("３つの値は等しいです。");
    else if(c12 || c13 || c23)
        puts("２つの値は等しいです。");
    else
        puts("３つの値は異なります。");

    return 0;
}
