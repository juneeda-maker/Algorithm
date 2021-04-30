#include <stdio.h>

int main()
{
    int t = 0;
    char dial[20];
    int i;

    scanf("%s", dial);

    for(i = 0; dial[i] != '\0'; i++)
    {
        if(dial[i] >= 'A' && dial[i] <= 'C')
        {
            t += 3;
        }
        else if(dial[i] >= 'D' && dial[i] <= 'F')
        {
            t += 4;
        }
        else if(dial[i] >= 'G' && dial[i] <= 'I')
        {
            t += 5;
        }
        else if(dial[i] >= 'J' && dial[i] <= 'L')
        {
            t += 6;
        }
        else if(dial[i] >= 'M' && dial[i] <= 'O')
        {
            t += 7;
        }
        else if(dial[i] >= 'P' && dial[i] <= 'S')
        {
            t += 8;
        }
        else if(dial[i] >= 'T' && dial[i] <= 'V')
        {
            t += 9;
        }
        else if(dial[i] >= 'W' && dial[i] <= 'Z')
        {
            t += 10;
        }
        else if(dial[i] == 0)
        {
            t += 11;
        }
        else if(dial[i] == 1)
        {
            t += 2;
        }
    }
    printf("%d", t);

    return 0;
}