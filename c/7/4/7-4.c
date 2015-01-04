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

unsigned set(unsigned x, int pos)
{
    unsigned tmp = 1 << (pos - 1);
    return x | tmp;
}

unsigned reset(unsigned x, int pos)
{
    unsigned tmp = 1 << (pos - 1);
    return x & (~0U - tmp);
}

unsigned inverse(unsigned x, int pos)
{
    unsigned tmp = 1 << (pos - 1);
    if(x >> (pos - 1) & 1U)
        return x - tmp;
    else
        return x + tmp;
}

int main(void)
{
    unsigned x, n;

    printf("非負の整数：");          scanf("%u", &x);
    printf("入れ替えるビット数：");  scanf("%d", &n);
    
    printf("\nx           = "); print_bits(x);
    printf("\n1にする     = "); print_bits(set(x, n));
    printf("\n0にする 　　= "); print_bits(reset(x, n));
    printf("\n入れ替える  = "); print_bits(inverse(x, n));
    putchar('\n');

    return 0;
}
