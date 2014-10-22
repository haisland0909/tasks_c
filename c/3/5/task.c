#include <stdio.h>

int main(void)
{
    int no1 , no2 , no3;
    no1 = 0 == 0;
    no2 = 1 > 0;
    no3 = 1 < 0;
    printf("0 == 0は%dです。\n" , no1);
    printf("1 > 0は%dです。\n" , no2);
    printf("1 < 0は%dです。\n" , no3);
    return 0;
}
