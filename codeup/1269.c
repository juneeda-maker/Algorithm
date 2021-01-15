#include <stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d %d %d %d",&a, &b, &c, &n);

    int sum = a;
    
    for(int i = 1; i < n; i++)
    {
        sum = sum  * b + c;
    }
    
    
    printf("%d", sum);
    return 0;
}