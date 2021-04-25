#include <stdio.h>
#include <string.h>

int main()
{
    int T, R;
    char s[21];

    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        scanf("%d %s", &R, s);

        for (int i = 0; i < strlen(s); i++)
        {
            for (int j = 0; j < R; j++)
                printf("%c", s[i]);
        }
        printf("\n");
    }
}