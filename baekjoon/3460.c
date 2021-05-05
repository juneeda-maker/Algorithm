#include <stdio.h>

int main()
{
    int t;
    
    int n;
    int count;

    scanf("%d", &t);
    int arr[t];

    while(t--)
    {
        scanf("%d", &n);
        count = 0;
        while(n != 0)
        {
            if(n%2 == 1)
                printf("%d ", count);
            n = n/2;
            count++;
        }
        printf("\n");
    }  
}