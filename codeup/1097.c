#include <stdio.h>
int main()
{
    int n,i,j,x,y;
    int a[20][20]={};
    for(i = 1; i<= 19; i++)
    {
        for(j = 1; j <= 19; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &n);

    for(i= 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        for(j = 1; j<=19; j++)
        {
            if(a[x][j] == 0)
            {
                a[x][j] =1;
            }
            else{
                a[x][j] = 0;
            }
        }

        for(j = 1; j <= 19; j++)
        {
            if(a[j][y] == 0)
            {
                a[j][y] = 1;
            }
            else
            {
                a[j][y] = 0;
            }
            
        }
    }

    for(x = 1; x <= 19; x++)
    {
        for(y =1; y <= 19; y++)
        {
            printf("%d ", a[x][y]);
        }
        printf("\n");
    }
    
    return 0;
}