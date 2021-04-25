#include <stdio.h>

int main()
{
    int n;
    int i,j;
    int result;

    result = 0;
    scanf("%d", &n);
    i = 0;

    char arr[n];
    scanf("%s", &arr);
    
    for(i = 0; i < n; i++)
    {
        result += arr[i] - '0';
    }


    printf("%d", result);

    return 0;
}