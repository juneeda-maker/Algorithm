#include <stdio.h>

int main()
{
    int t;
    int change;
    int price[4] = {25, 10, 5, 1};
    int count[4] = {0,};
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d", &change);
        for(int j = 0; j < 4;)
        {
            count[j] = change / price[j];
            change = change % price[j];

            if(change < price[j])
            {
                j++;
            }
        }
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", count[j]);
        }
    }
}