/*
５人の学生を身長の昇順にソート
*/

#include <stdio.h>
#include <string.h>

#define NUMBER		5		/* 学生の人数 */
#define NAME_LEN	64		/* 名前の文字数 */

enum sortway
{
    Height,
    Name,
    Invalid
};

/*=== 学生を表す構造体 ===*/
typedef struct {
    char  name[NAME_LEN];	/* 名前 */
    int   height;			/* 身長 */
    float weight;			/* 体重 */
    long  schols;			/* 奨学金 */
} Student;

Student scan_student()
{
    Student temp;

    printf("名前:");
    scanf("%s", temp.name);
    printf("身長:");
    scanf("%d", &temp.height);
    printf("体重:");
    scanf("%f", &temp.weight);
    printf("奨学金:");
    scanf("%ld", &temp.schols);
    return temp;
}

/*--- xおよびyが指す学生を交換 ---*/
void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

/*--- 学生の配列aの先頭n個の要素を身長の昇順にソート ---*/
void sort_by_name(Student a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (strcmp(a[j - 1].name, a[j].name) > 0) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }  
    }
}

void sort_by_height(Student a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--){
            if (a[j - 1].height > a[j].height){
                swap_Student(&a[j - 1], &a[j]);
            }             
        }
            
    }
}

enum sortway select(void)
{
    int tmp;

    do {
        printf("ソート方法　0…身長　1…名前");
        scanf("%d", &tmp);
    } while (tmp < Height || tmp >= Invalid);
    return tmp;
}

int main(void)
{
    int i;
    Student std[5];
    printf("5人の学生の情報を入力してください。\n");
    for (i = 0; i < NUMBER; i++) {
        printf("%d人目\n", i + 1);
        std[i] = scan_student();
    }

    for (i = 0; i < NUMBER; i++)
        printf("%-8s %6d%6.1f%7ld\n",
        std[i].name, std[i].height, std[i].weight, std[i].schols);

    switch (select())
    {
        case Height :
            sort_by_height(std, NUMBER); puts("\n身長順にソートしました。"); break;
        case Name :
            sort_by_name(std, NUMBER); puts("\n名前順にソートしました。"); break;
    }

    
    for (i = 0; i < NUMBER; i++)
        printf("%-8s %6d%6.1f%7ld\n",
        std[i].name, std[i].height, std[i].weight, std[i].schols);

    return 0;
}
