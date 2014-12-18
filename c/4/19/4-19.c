#include <stdio.h>

int main(void)
{
    int i, n , c;

    printf("整数値：");
    scanf("%d", &n);
    c = 0;
    for (i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d \n", i);
            c++;
        }
    }
    printf("約数は%d個です。", c);

    return 0;
}
