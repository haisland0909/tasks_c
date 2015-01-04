#include <stdio.h>

int main(void)
{
    float a       = 123456789012345678901234567890.0;
    double b      = 123456789012345678901234567890.0;
    long double c = 123456789012345678901234567890.0;

    printf("aのサイズ = %lu\n", sizeof(a));
    printf("bのサイズ = %lu\n", sizeof(b));
    printf("cのサイズ = %lu\n", sizeof(c));

    return 0;
}
