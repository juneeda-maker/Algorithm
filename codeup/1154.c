#include <stdio.h>
int main()
{
    int a,b;
    int result;
    scanf("%d %d",&a, &b);

    result = a > b ? a-b : b-a;

    printf("%d", result);

    return 0;
}