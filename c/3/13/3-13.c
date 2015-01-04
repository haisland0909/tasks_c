#include <stdio.h>

int main(void)
{
    int month;                  /* 月 */

    printf("何月ですか：");
    scanf("%d", &month);
    printf("%d月は", month);
    switch(month){
        case 1  : puts("冬です。") ; break;
        case 2  : puts("冬です。") ; break;
        case 3  : puts("春です。") ; break;
        case 4  : puts("春です。") ; break;
        case 5  : puts("春です。") ; break;
        case 6  : puts("夏です。") ; break;
        case 7  : puts("夏です。") ; break;
        case 8  : puts("夏です。") ; break;
        case 9  : puts("秋です。") ; break;
        case 10 : puts("秋です。") ; break;
        case 11 : puts("秋です。") ; break;
        case 12 : puts("冬です。") ; break;
        default : puts("ありません。") ; break;
    }

    return 0;
}
