#include <stdio.h>

enum season {Spring, Summer, Autumn, Winter, Invalid};

void spring(void)
{
    puts("桜");
}

void summer(void)
{
    puts("海");
}

void autumn(void)
{
    puts("紅葉");
}

void winter(void)
{
    puts("雪");
}

enum season select(void)
{
    int tmp;

    do {
        printf("0:春,1:夏,2:秋,3:冬,4:終了…");
        scanf("%d", &tmp);
    } while (tmp < Spring || tmp > Invalid);
    return tmp;
}

int main(void)
{
    enum season selected;

    do {
        switch (selected = select()) {
            case Spring : spring(); break;
            case Summer : summer(); break;
            case Autumn : autumn(); break;
            case Winter : winter(); break;
        }
    } while (selected != Invalid);

    return 0;
}
