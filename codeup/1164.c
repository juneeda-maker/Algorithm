#include <stdio.h>
int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a > 170)
    {
        if(b > 170)
        {
            if(c > 170)
            {
                printf("PASS");
            }
            else
            {
            printf("CRASH");
            }    
        }
        else
        {
            printf("CRASH");
        }    
        
    }
    else
    {
        printf("CRASH");
        
    }
    
    return 0;
}