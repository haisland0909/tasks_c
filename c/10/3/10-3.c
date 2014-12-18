#include <stdio.h>

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

void sort3(int *n1, int *n2, int *n3)
{
    if (*n1 > *n2){
        swap(n1, n2);
    }
    if (*n2 > *n3){
        swap(n2, n3);
    }
    if (*n1 > *n2){
        swap(n1, n2);
    }
}

int main(void)
{
    int na, nb, nc;

    puts("二つの整数を入力してください。");
    printf("整数Ａ：");   scanf("%d", &na);
    printf("整数Ｂ：");   scanf("%d", &nb);
    printf("整数Ｃ：");   scanf("%d", &nc);

    sort3(&na, &nb, &nc);

    puts("昇順にソートしました。");
    printf("整数Ａは%dです。\n", na);
    printf("整数Ｂは%dです。\n", nb);
    printf("整数Ｃは%dです。\n", nc);

    return 0;
}
