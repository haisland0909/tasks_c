#include <stdio.h>

void adjust_point(int *n)
{
    if (*n < 0){
        *n = 0;
    }
    if (*n > 100){
        *n = 100;
    }
}

int main(void)
{
    int a = -1;       /* 佐藤宏史君の身長 */
    int b = 10;       /* 佐中俊哉君の身長 */
    int c = 105;       /* 真崎宏孝君の身長 */

    adjust_point(&a);
    adjust_point(&b);
    adjust_point(&c);

    printf("a：%d\n", a);
    printf("b：%d\n", b);
    printf("c：%d\n", c);

    return 0;
}
