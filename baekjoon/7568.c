#include <stdio.h>

int main()
{
    int n;
    int arr[50][2];
    int max;
    int count;
    
   
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    for(int i = 0; i < n; i++)
    {
        count = 1;   
        for(int j = 0; j < n; j++)
        {
            if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
            {
                count++;
            }
        }
        printf("%d ", count);
    }
}