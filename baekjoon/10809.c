#include <stdio.h>

int main()
{
    char c[101];
    int count, i;

    scanf("%s", &c);

    char s;
    s = 'a';

    while(s <= 'z')
    {
        count = 0;
        for(i = 0; c[i] != '\0'; i++)
        {
            if(s == c[i])
            {
                count++;
                printf("%d ", i);
                break;
            }
        }
        if(count == 0)
            printf("%d ", -1);
        s++;
    }
}