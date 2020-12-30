#include <stdio.h>
int main()
{

   int a[100][100] = {};

   int h, w;
   int l,d,x,y, n;
   int result;
   scanf("%d %d", &w, &h);

   scanf("%d", &n);
   
   

    for(int k = 1; k <= n; k++)
        {  
            scanf("%d %d %d %d", &l, &d, &x, &y);
            for(int i = 1; i <= w; i++)
            {
                for(int j = 1; j <= h; j++)
                {
                    if(d == 0)
                    {
                        result = y+l;

                        for(int i = y; i < result; i++)
                                {
                                    a[x][i]=1;
                                }
                    }
                    else
                    {
                        result = x+l;

                        for(int i = x; i < result; i++)
                                {
                                    a[i][y]=1;
                                }
                    }
                }
            }
        }

        
    for(int i = 1; i <= w; i++)
            {
                for(int j = 1; j <= h; j++)
                {
                    
                    
                    printf("%d ", a[i][j]);
                    
                }
            
                printf("\n");
            }

        return 0;
    }