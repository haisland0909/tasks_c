#include <stdio.h>
#define CHAR_LENGTH 10
#define STR_LENGTH 128

int str_length(const char s[])
{
    int len = 0;

    while (s[len])
        len++;
    return len;
}

/*--- 文字列sを表示（改行はしない）---*/
void rev_string(char s[STR_LENGTH])
{
    int i, half, len, temp;
    len  = str_length(s) - 1;
    half = (str_length(s) - 1) / 2;
    for(i = 0; i < half; i++){
        temp       = s[i];
        s[i]       = s[len - i];
        s[len - i] = temp;
    }
}

void rev_strings(char s[][STR_LENGTH], int n)
{
    
    int i;
    for (i = 0; i < n; i++){
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0')
            break;
        rev_string(s[i]);
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
}

int main(void)
{
    int i;
    char s[CHAR_LENGTH][STR_LENGTH];

    for (i = 0; i < CHAR_LENGTH; i++) {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$' && s[i][5] == '\0')
            break;
    }

    rev_strings(s, CHAR_LENGTH);


    return 0;
}
