#include <stdio.h>
int main()
{
    int a,b;
    int result;
    scanf("%d %d", &a, &b);

    if(a%2 != 0)
    {
        printf("홀수");
    }
    else
    {
        printf("짝수");
    }
    printf("+");

    if(b%2 != 0)
    {
        printf("홀수");
    }
    else
    {
        printf("짝수");
    }
    printf("=");

    result = a + b;

    if(result%2 != 0)
    {
        printf("홀수");
    }
    else
    {
        printf("짝수");
    }

    return 0;
}