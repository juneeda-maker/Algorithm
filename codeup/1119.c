#include <stdio.h>
int main()
{
    int day;
    

    scanf("%d", &day);

    int *dayPtr;

    dayPtr = &day;
    int hours = *dayPtr * 24;

    printf("%d", hours);
    return 0;
}