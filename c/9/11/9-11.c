#include <stdio.h>
#define CHAR_LENGTH 10
#define STR_LENGTH 128
/*--- 文字列の配列を表示 ---*/
void put_strary(const char s[][STR_LENGTH], int n)
{
    int i;
    for (i = 0; i < n; i++){
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0')
            break;
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
}

int main(void)
{
    int  i;
    char s[CHAR_LENGTH][STR_LENGTH];

    for (i = 0; i < CHAR_LENGTH; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0') 
            break;
    }

    put_strary(s, CHAR_LENGTH);

    return 0;
}
