#include <stdio.h>

int fx;                     /* 0で初期化される */

int main(void)
{
    int i;
    static double sd[2];       /* 0.0で初期化される */

    for (i = 0; i < 2; i++)
        printf("sa[%d] = %f\n", i, sd[i]);

    return 0;
}
