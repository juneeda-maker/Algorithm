#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    int i;
    for(i = 0; i <= num; i++)
    {
        if(i%3 == 0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}