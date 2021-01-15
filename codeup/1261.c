#include <stdio.h>
int main()
{
    int arr[10];

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        if(arr[i]%5 == 0)
        {
            printf("%d",arr[i]);
            break;
        }
        else if(arr[9]%5 != 0)
        {
            printf("0");
            break;
        }
        else
        {
            continue;
        }
        
    }
    return 0;
}