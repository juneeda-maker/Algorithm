#include <stdio.h>
int main()
{
    long long int a, m, d, n;
    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);

    int i;

    for(i = 1; i < n; i++)
    {
        a*=m;
        a+=d;
    }

    printf("%lld", a);

    return 0;
}