#include <stdio.h>
int main()
{
    int n;
    int result;
    scanf("%d", &n);

    
    
    result  = ((n%10) * 10 + (n/10)) * 2;

    if(result <= 99)
    {
        
    }
    else
    {
        result  = (((n%10) * 10 + (n/10)) * 2) - 100;
    }

    printf("%d\n", result);
    if(result <= 50)
    {
        printf("GOOD");
    }
    else
    {
        printf("OH MY GOD");
    }
    
    return 0;
}