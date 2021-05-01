#include <stdio.h>


int main()
{
    int i;
    char n[11];
    char tmp;

    tmp = ' ';
    i = 0;
    scanf("%s", n);

    
    while(n[i])
    {
        for(int j = i + 1; n[j]; j++)
        {
            if(n[j] > n[i])
            {
                tmp = n[j];
                n[j] = n[i];
                n[i] = tmp;
            }
        }
        printf("%c", n[i]);
        i++;
    }
    
}