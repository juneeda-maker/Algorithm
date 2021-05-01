#include <stdio.h>

int main()
{
    int n;
    int sum;
    int tmp;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = i; tmp = i;
        for(int j = 1000000; j >= 1; j = j / 10)
        {
            sum = sum + (tmp/j);
            tmp = tmp % j;
        }

        if(sum == n)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("%d", 0);
}