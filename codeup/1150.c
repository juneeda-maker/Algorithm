#include <stdio.h>
int main()
{
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);
    int result;

    result = (a < b ? a : b) < (b < c ? b : c) ? (a < b ? a : b) : (b < c ? b : c);
    printf("%d", result);
    return 0;
}