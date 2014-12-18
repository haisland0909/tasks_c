#include <stdio.h>

int main(void){
    unsigned n, m;
    n = 65535;
    m = n * n * n;
    printf("65535 * 65535 * 65535 = %u", m);

    return 1;
}
