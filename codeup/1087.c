#include <stdio.h>
int main()
{
    int num;
    int sum = 0;

    scanf("%d", &num);
    int i =0;

    /*
    for(i = 0; sum < num; i++)
    {
        sum = sum + i;
    }

    printf("%d", sum);
    */

   for(i = 1; ; i++)
   {
       sum = sum + i;
        if(sum >= num)
        {
            break;
        }
   }

   printf("%d", sum);

    return 0;
}