#include <stdio.h>

int main(void)
{
    int i, start , end , interval , time , height;
    start    = 0;
    end      = 0;
    interval = 0;
    while (start <= 0 || end <= 0 || interval <= 0 || start > end){
        printf("何cmから：");
        scanf("%d", &start);
        printf("何cmまで：");
        scanf("%d", &end);
        printf("何cm間隔：");
        scanf("%d", &interval);
    }
    time   = 1 + (end - start) / interval;
    height = start;
    for (i = 1; i <= time; i++){
        printf("%dcm %.2fkg\n" , height , (height - 100) * 0.9);
        height += interval;
    }

    return 0;
}
