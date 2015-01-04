#include <stdio.h>

int factorial(int n)
{
    int sum = 1;
    int i;
    for (i = n; i > 0; i--)
    {
        sum *= i;
    }

    return sum;
}

int main(void)
{
    int n;
    printf("整数を入力してください:");
    scanf("%d", &n);
    
    printf("%dの階乗は%dです。",n , factorial(n));

    return 0;
}
