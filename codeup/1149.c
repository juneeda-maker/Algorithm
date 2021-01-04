#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int result;

    result = a < b ? b : a;
    
    printf("%d", result);
    return 0;
}