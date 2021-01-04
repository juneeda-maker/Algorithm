#include <stdio.h>
int main()
{
    int a,x;
    int result;

    scanf("%d %d", &a, &x);

    result = a >> x;

    printf("%d", result);
    return 0;
}