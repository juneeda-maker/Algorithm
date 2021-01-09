#include <stdio.h>
int main()
{
    int a,b,c;
    int max;
    int result;
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    
    if(b >= max && b >= c)
    {
        max = b;
    }
    else if(c >= max && c >= b)
    {
        max = c;
    }

    result = (a+b+c) - max;

   

    if(max < result)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    

    return 0;
}