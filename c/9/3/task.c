#include <stdio.h>
#define CHAR_LENGTH 10
int main(void)
{
    int  i;
    char s[CHAR_LENGTH][128];

    for (i = 0; i < CHAR_LENGTH; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0') 
            break;
    }

    for (i = 0; i < CHAR_LENGTH; i++){
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0')
            break;
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }

    return 0;
}
