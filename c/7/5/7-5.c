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

unsigned set_n(unsigned x, int pos, int n)
{
    unsigned i;
    unsigned tmp = 1 << (pos - 1);
    for(i = 0; i < n; i++){
        x |= tmp;
        tmp <<= 1;
    }
    return x;
}

unsigned reset_n(unsigned x, int pos, int n)
{
    unsigned i;
    unsigned tmp = 1 << (pos - 1);
    for(i = 0; i < n; i++){
        x &= (~0U - tmp);
        tmp <<= 1;
    }
    return x;
}

unsigned inverse_n(unsigned x, int pos, int n)
{
    unsigned i;
    unsigned tmp = 1 << (pos - 1);
    for(i = 0; i < n; i++){
        if (x >> (pos + i - 1) & 1U)
            x -= tmp;
        else
            x += tmp;
        tmp <<= 1;
    }
    return x;
}

int main(void)
{
    unsigned x, n, p;

    printf("非負の整数　　　　　：");  scanf("%u", &x);
    printf("入れ替えるビット数　：");  scanf("%d", &n);
    printf("入れ替えるビット範囲：");  scanf("%d", &p);
    
    printf("\nx           = "); print_bits(x);
    printf("\n1にする     = "); print_bits(set_n(x, n, p));
    printf("\n0にする 　　= "); print_bits(reset_n(x, n, p));
    printf("\n入れ替える  = "); print_bits(inverse_n(x, n, p));
    putchar('\n');

    return 0;
}
