#include <stdio.h>

int main(void)
{
    int ch;
    int num = 1;

    while ((ch = getchar()) != EOF){
        if (ch == '\n')
            num += 1;
    }

    printf("行数は%d行です", num);

    return 0;
}
