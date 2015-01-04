#include <stdio.h>

int main(void)
{
    float x, sum;
    sum = 0.0;
    for (x = 0.0; x <= 1.0; x += 0.01)
        sum += x;
    printf("合計:%f", sum);

    return 0;
}
