#include <stdio.h>
#include <string.h>

#define NUM 64

/*=== 学生を表す構造体 ===*/
typedef struct {
    char  name[100];	/* 名前 */
    double   height;			/* 身長 */
    double weight;			/* 体重 */
} Member;

void swap_Member(Member *x, Member *y)
{
    Member temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Member a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--){
            if (a[j - 1].height > a[j].height){
                swap_Member(&a[j - 1], &a[j]);
            }
        }

    }
}

int main(void)
{
    FILE   *fp;
    int    ninzu = 0;			/* 人数 */
    char   name[100];			/* 名前 */
    double height, weight;		/* 身長・体重 */
    double hsum = 0.0;			/* 身長の合計 */
    double wsum = 0.0;			/* 体重の合計 */
    Member member[NUM];

    if ((fp = fopen("hw.dat", "r")) == NULL)				/* オープン */
        printf("\aファイルをオープンできません。\n");
    else {
        while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
            printf("%-10s %5.1f %5.1f\n", name, height, weight);
            member[ninzu].height = height;
            member[ninzu].weight = weight;
            strcpy(member[ninzu].name, name);
            hsum += height;
            wsum += weight;
            ninzu++;
            
        }

        printf("身長で並び替えます\n");
        sort_by_height(member, ninzu);
        for (size_t i = 0; i < ninzu; i++)
        {
            printf("%-10s %5.1f %5.1f\n", member[i].name, member[i].height, member[i].weight);
        }

        printf("----------------------\n");
        printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
        fclose(fp);											/* クローズ */
    }

    return 0;
}