#include <stdio.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main(void)
{
    int a, b, c, d;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("max(max(a, b), max(c, d)) = %d\n", max(max(a, b), max(c, d)));
    printf("max(max(max(a, b), c), d) = %d", max(max(max(a, b), c), d));
    return 0;
}
