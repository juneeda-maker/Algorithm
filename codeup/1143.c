#include <stdio.h>
int main()
{
    int a,b;
    int num;
    scanf("%d %d", &a, &b);
    
    num = a & b;
    printf("%d", num);
    return 0;
}