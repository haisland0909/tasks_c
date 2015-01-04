#include <stdio.h>

int main(void)
{

    int i;
    float x, y;
    y = 0.0;
    for (i = 0; i <= 100; i++) {
        x = i / 100.0;
        printf("x = %f ", x);
        printf("x = %f\n", y);
        y += 1 / 100.0;
    }
    return 0;
}
