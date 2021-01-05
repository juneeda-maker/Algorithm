#include <stdio.h>
int main()
{
    int age;
    int since;

    scanf("%d", &age);
    since = 2012 - age + 1;

    if(since >= 1900 && since < 2000)
    {
        printf("%d %d", since%1900, 1);
    }

    else
    {
        printf("%d %d", since%2000, 3);
    }
    
    

    return 0;
}