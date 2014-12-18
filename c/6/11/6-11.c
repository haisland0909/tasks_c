#include <stdio.h>

#define NUMBER      5       /* 要素数 */

/*--- 要素数nの配列vからkeyと一致する要素を探索（番兵法）---*/
int search_idx(int v[], int idx[], int key, int n)
{
    int i   = 0;
    int num = 0;

    while (i < NUMBER) {
        if (v[i] == key)
            idx[num++] = i;          /* 探索成功 */
        i++;
    }
    return num;
}

int main(void)
{
    int i, ky;
    int vx[NUMBER];
    int res;
    int idx[NUMBER] = {0};

    for (i = 0; i < NUMBER; i++) {
        printf("vx[%d]：", i);
        scanf("%d", &vx[i]);
    }
    printf("探す値：");
    scanf("%d", &ky);

    res = search_idx(vx, idx, ky, NUMBER);
    if (res == 0)
        printf("値はありませんでした");
    else{
        printf("%dは", ky);
        for(i = 0; i < NUMBER; i++){
            if (idx[i] > 0){
                if (i > 0)
                    putchar(',');
                printf("%d", idx[i]);
            }
            else
                break;
        }
        printf("番目にありました。");
    }


    return 0;
}
