#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
    int i, j, k;    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            c[i][j] = 0;
            for(k = 0; k < 3; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main(void)
{
    int i, j, k;
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


    mat_mul(data_1, data_2, res);

    printf("結果:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d " , res[i][j]);
        }
        putchar('\n');
    }


}
