#include <stdio.h>



int main()
{
    int count;
    int index;
    char s[1000000];
    int i;

    i = 0;
    index = 1;
    count = 0;

    scanf("%[^\n]s", s);

    while(s[i])
    {
        if(s[i] == ' ')
        {
            index = 1;
        }
        else if(index)
        {
            index = 0;
            count++;
        }
        i++;
    }

    printf("%d", count);

    return (0);
}