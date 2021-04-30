#include <stdio.h>

int main()
{
    int n,i;
    int count;
    int start;
    int end;

    start = 2;
    end = 7;
    count = 2;
    i = 2;
    scanf("%d", &n);
    
    while(1)
    {   if(n == 1)
        {
            count = 1;
            printf("%d", count);
            break;
        }
        if(n >= start && n <= end)
        {
            printf("%d", count);
            break;
        }
        count++;
        start = end + 1;
        end = end + (6 * i);
        i++;
    }
}