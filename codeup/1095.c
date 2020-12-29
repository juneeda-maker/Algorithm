#include <stdio.h>

int main()
{
    int n, i;
    int a[10000];

    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    
    
    int min = a[1];
    for(i = 2; i <= n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
        else
        {
            continue;
        }
        
    }


    printf("%d", min);
    return 0;
}

    
  