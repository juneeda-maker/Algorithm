#include <stdio.h>

int main()
{
    int num[7];
    int sum;
    int count;
    int min;

    min = 100;
    sum = 0;
    count = 0;

    for(int i = 0; i < 7; i++)
    {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 7; i++)
    {
        if(num[i] % 2 != 0)
        {
            sum = sum + num[i];
            if(num[i] < min)
            {
                min = num[i];
            }
        }
        else
        {
            count++;
        }
        
    }

    if(count == 7)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", sum , min);
    }
}