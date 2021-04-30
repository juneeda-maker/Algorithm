#include <stdio.h>

int main()
{
    long long A,B,C;
    long long count;
    long long result;

    count = 1;
    
    scanf("%lld %lld %lld", &A, &B, &C);

    if(B >= C)
    {
        count = -1;
    }
    else
    {
        count = (A / (C - B)) + 1;
    }
    printf("%lld", count);
}