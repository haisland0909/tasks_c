#include <stdio.h>

int main(void)
{
    int i = 20;
    double d = 2.0;
    
    puts("種々の計算を行なう。");
    printf("i = %d        d = %f\n", i, d);
    printf("i + d        = %f\n", i + d);
    printf("i + 22.2     = %f\n", i + 22.2);
    printf("i * d        = %f\n", i * d);
    printf("i * 3.0      = %f\n", i / 3.0);
    printf("i / d        = %f\n", i / d);
    printf("i / 4.0      = %f\n", i / 4.0);

    // 行なってはいけない printf("%d", 実数)
    puts("\n行なってはいけない計算の結果  printf(\"%d\", 実数)");
    printf("3.0 + 4      = %d\n", 3.0 + 4);
    printf("i + d        = %d\n", i + d);
    printf("i * 3.0      = %d\n", i * 3.0);
    printf("i / 4.0      = %d\n", i / 4.0);
    
    return(0);
}
