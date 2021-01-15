#include <stdio.h>
int main()
{
    int n;
    int sum;

    scanf("%d", &n);
   

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum = 0;

    for(int i =0; i < n; i++)
    {
        if(arr[i]%5 == 0)
        {
            sum = sum + arr[i];
        }
        else
        {
            continue;
        }
        
    }

    printf("%d",sum);
    return 0;
}