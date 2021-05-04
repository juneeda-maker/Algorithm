#include <stdio.h>

int main()
{
    char s[1001];
    int i;

    i = 0;

    scanf("%s", s);

    while(s[i])
    {   
        if(s[i] >= 65 && s[i] <= 67)
        {
            s[i] = s[i] + 23;
            printf("%c", s[i]);
        }
        else
        {
            s[i] = s[i] - 3;
            printf("%c", s[i]);
        }
        i++;
    }
    printf("\n");
}