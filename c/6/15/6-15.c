#include <stdio.h>

int call_count;

void put_count()
{
    printf("put_count : %d回目\n", ++call_count);
}

int main(void)
{
    int i;
    for(i = 0; i < 3; i++){
        put_count();
    }
}
