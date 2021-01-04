#include <stdio.h>
int main()
{
    double ball;
    scanf("%lf", &ball);

    if (50 <= ball && ball <= 60)
    {
        printf("win");
    }
    else
    {
        printf("lose");
    }
    

    return 0;
}