#include <stdio.h>

int main()
{
    int a;
    int b;

    int result_a = 0;
    int result_b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    while(a)
    {
        result_a *= 10; 
        result_a += a % 10;
        a = a / 10;
    }
    while(b)
    {
        result_b *= 10;
        result_b += b % 10;
        b = b / 10;
    }

    if(result_a > result_b)
    {
        printf("%d", result_a);
    }
    else
    {
        printf("%d", result_b);
    }
}