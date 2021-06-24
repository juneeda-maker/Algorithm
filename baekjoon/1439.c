#include <stdio.h>

int main(void)
{
    int i = 0, one = 0, zero = 0;
    char arr[1000000];

    while(1)
    {
        scanf("%c", &arr[i]);

        if(arr[i++] == '\n')
            break;
    }
    int j;
    j = 0;
    while(1)
    {
        if(arr[j] == '0')
        {
            while(arr[j + 1] == '0')
                j++;
            zero += 1;
            j++;
        }
        else
        {
            while(arr[j + 1] == '1')
                j++;
            one += 1;
            j++;
        }
        if(arr[j] == '\n')
            break;
    }
    

    int ans;
    if(zero < one)
        ans = zero;
    else
        ans = one;
    printf("%d", ans);
}