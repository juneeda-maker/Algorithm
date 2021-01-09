#include <stdio.h>
int main()
{
    int arr[4] = {};
    int count = 0;


    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);


    for(int i = 0; i <= 3; i++)
    {
        if(arr[i] == 1)
        {
            count++;
        }
        else
        {
            continue;
        }
        
    }

    
    if(count == 1)
    {
        printf("도");
    }
    else if(count == 2)
    {
        printf("개");
    }
    else if(count == 3)
    {
        printf("걸");
    }
    else if(count == 4)
    {
        printf("윷");
    }
    else if(count == 0)
    {
        printf("모");
    }
    return 0;
}