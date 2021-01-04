#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    int result;
    
    if( a <= b && a<= c)
    {
        if(b <= c)
        {
            result = b;
        }
        else
        {
            result = c;
        }
    }
    else if(b <= a && b <= c)
    {
        if(a < c)
        {
            result = a;
        }
        else
        {
            result = c;
        }
        
    }
    else if(c <= a && c <= b)
    {
        if(a <= b)
        {
            result = a;
        }

        else
        {
            result = b;
        }
        
    }

    printf("%d", result);
    return 0;
}