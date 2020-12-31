#include <stdio.h>

 
int main() {
  

   int a[11][11] = {};
   int x,y; //시작점
   int i, j;

   for(i = 1; i <= 10; i++)
   {
       for(j = 1; j <= 10; j++)
       {
           scanf("%d", &a[i][j]);
       }
   }

    x = 2;
    y = 2;

   while(1)
   {
       if(a[x][y] == 2)
       {
           break;
       }

       if(a[x][y+1] == 1)
       {
           if(a[x + 1][y] == 1)
           {
               break;
           }
           a[x][y] = 9;
           x++;
       }

       else
       {
           a[x][y] = 9;
           y++;
       }

   }
   
   a[x][y] = 9;

   //printf("\n");

   for(i = 1; i <= 10; i++)
   {
       for(j = 1; j <= 10; j++)
       {
           printf("%d ", a[i][j]);
       }
       printf("\n");
   }
   

   return 0;
}