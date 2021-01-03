#include <stdio.h>
int main()
{
    int a,b;

    scanf("%d %d", &a, &b);
    printf("%0.1f", ((float)a*(float)b)/2);
    return 0;
}