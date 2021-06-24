#include <stdio.h>

int main()
{
    int N, L;
    int tmp;

    tmp = 0;
    scanf("%d %d", &N, &L);

    int h[10000] = {0,};

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &h[i]);
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            if(h[i] > h[j])
            {
                tmp = h[i];
                h[i] = h[j];
                h[j] = tmp;
            }
        }
    }

    for(int i = 0; i < N; i++)
    {
        if(L >= h[i])
        {
            L++;
        }
        else
        {
            break;
        }
    }

    printf("%d", L);
}