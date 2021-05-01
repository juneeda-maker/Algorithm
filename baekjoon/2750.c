#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int tmp;
    tmp = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
        printf("%d\n", arr[i]);
    }
}