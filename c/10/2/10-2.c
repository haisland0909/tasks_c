#include <stdio.h>

int makedaylimit(int y, int m)
{
    int res;
    switch (m) {
        case 2 : {
            if (y % 4 == 0) {
                res = 29;
            }else{
                res = 28;
            }
            break;
        }
        case 4  : res = 30; break;
        case 6  : res = 30; break;
        case 9  : res = 30; break;
        case 11 : res = 30; break;
        default : res = 31;
    }

    return res;
}

void increment_date(int *y, int *m, int *d){
    int daylimit = makedaylimit(*y, *m);
    if (*d == daylimit) {
        if (*m == 12) {
            ++*y; *m = 1;
        }else{
            ++*m;
        }
        *d = 1;
    }else{
        ++*d;
    }
}

int main(void)
{
    int y, m, d, daylimit;
    printf("年：");
    do {
		scanf("%d", &y);
		if (y < 0){
			printf("正の値を入力してください：");
        }
	} while (y < 0);

    printf("月：");
    do {
		scanf("%d", &m);
		if (m < 1 || m > 12){
			printf("1-12を入力してください：");
        }
	} while (m < 1 || m > 12);

    daylimit = makedaylimit(y, m);

    printf("日：");
    do {
		scanf("%d", &d);
		if (d < 1 || d > daylimit){
			printf("1-%dを入力してください：", daylimit);
        }
	} while (d < 1 || d > daylimit);

    increment_date(&y, &m, &d);

    printf("次の日は%d年%d月%d日です", y, m, d);

}
