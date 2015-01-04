#include <stdio.h>

/*--- 整数x中のセットされたビット数を返す ---*/
int count_bits(unsigned x)
{
    int bits = 0;
    while (x) {
        if (x & 1U) bits++;
        x >>= 1;
    }
    return bits;
}

/*--- unsigned型のビット数を返す ---*/
int int_bits(void)
{
    return count_bits(~0U);
}

/*--- unsigned型のビット内容を表示 ---*/
void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

int pow2(unsigned m, unsigned n)
{
    int i;
    int res = 1;
    for(i = 0; i < n; i++){
        res *= m;
    }
    return res;
}

unsigned lrotate(unsigned x, int n)
{
    int i;
    int digit;
    for (i = 0; i < n; i++){
        digit = (x >> (int_bits() - 1)) & 1U ? 1 : 0;
        x <<= 1;
        if(digit == 1){
            x += 1;
        }
    }
        
    return x;
}


unsigned rrotate(unsigned x, int n)
{
    int i;
    int digit;
    for (i = 0; i < n; i++){
        digit = x & 1U ? 1 : 0;
        x >>= 1;
        if(digit == 1){
            x += pow2(2, int_bits() - 1);
        }
    }

    return x;
}

int main(void)
{
    unsigned x, n;

    printf("非負の整数：");          scanf("%u", &x);
    printf("回転するビット数：");    scanf("%u", &n);

    printf("\n整数         = ");     print_bits(x);
    printf("\n左回転       = ");     print_bits(lrotate(x, n));
    printf("\n右回転       = ");     print_bits(rrotate(x, n));
    putchar('\n');

    return 0;
}
