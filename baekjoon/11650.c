#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][2];
    int tmp[1][2] = {0,};

    

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i][0] > arr[j][0])
            {
                tmp[0][0] = arr[i][0];
                tmp[0][1] = arr[i][1];
                arr[i][0] = arr[j][0];
                arr[i][1] = arr[j][1];
                arr[j][0] = tmp[0][0];
                arr[j][1] = tmp[0][1];
            }
            else if((arr[i][0] == arr[j][0]) && arr[i][1] > arr[j][1])
            {
                tmp[0][0] = arr[i][0];
                tmp[0][1] = arr[i][1];
                arr[i][0] = arr[j][0];
                arr[i][1] = arr[j][1];
                arr[j][0] = tmp[0][0];
                arr[j][1] = tmp[0][1];
            }
        }
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }
}