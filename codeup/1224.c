#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    float e = (float)a/b;
    float f = (float)c/d;
    if(e > f)
    {
        printf(">");
    }
    else if(e == f)
    {
        printf("=");
    }
    else
    {
        printf("<");
    }
    
    return 0;
}