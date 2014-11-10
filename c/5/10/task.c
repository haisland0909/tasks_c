#include <stdio.h>

int main(void)
{
    int i, j, k, l;
    int data_1[4][3];
    int data_2[3][4];
    int res[4][4];
    printf("データ入力\n");
    printf("行列1\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("データ%d-%d:", i + 1, j + 1);
            scanf("%d", &data_1[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("%d " , data_1[i][j]);
        }
        putchar('\n');
    }

    printf("行列2\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("データ%d-%d:", i + 1, j + 1);
            scanf("%d", &data_2[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d " , data_2[i][j]);
        }
        putchar('\n');
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            res[i][j] = 0;
            for(k = 0; k < 3; k++){
                res[i][j] += data_1[i][k] * data_2[k][j];
            }
        }
    }

    printf("結果:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d " , res[i][j]);
        }
        putchar('\n');
    }


}
