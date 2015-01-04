#include <stdio.h>

int main(void)
{
    float a;
    double b;
    long double c;

    printf("Float:");scanf("%f", &a);
    printf("Double:");scanf("%lf", &b);
    printf("Long Double:");scanf("%Lf", &c);

    printf("a = %f\n",  a);
    printf("b = %lf\n",  b);
    printf("c = %Lf\n", c);

    return 0;
}
