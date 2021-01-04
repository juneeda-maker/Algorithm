#include <stdio.h>
int main()
{
    int y,m,d;
    int result;
    scanf("%d %d %d",&y, &m, &d);

    result = (y + m + d)/100;
    if(result%2 == 0)
    {
        printf("대박");
    }
    else
    {
        printf("그럭저럭");
    }
    
    return 0;
}