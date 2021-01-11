#include <stdio.h>
int main()
{   
    int arr[7]; // g는 보너스 번호 
    int arr2[6];

    int count = 0;
    int bonus = 0;

    for(int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &arr2[i]);
    }
    

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(arr2[i] == arr[j])
            {
                count++;
            }
            else
            {
                continue;
            }
            
        }
    }

    for(int i = 0; i < 6; i++)
    {
        if(arr2[i] == arr[6])
        {
            bonus = 1;
        }
        else
        {
            continue;
        }
        
    }

    if(count == 6)
    {
    printf("1");
    }
    else if(count == 5 && bonus ==1)
    {
        printf("2");
    }
    else if(count == 5)
    {
        printf("3");
    }
    else if(count == 4)
    {
        printf("4");
    }
    else if(count == 3)
    {
        printf("5");
    }
    else
    {
        printf("0");
    }
    
    return 0;
}