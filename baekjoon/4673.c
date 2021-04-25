#include <stdio.h>

int check_self(int num)
{
    int result;

    result = num;
    while(num > 0)
    {
        result += num % 10;
        num = num / 10;
    }
    return result;
}

int main()
{
    int arr[10001];
    int i;
    int check;

    for(i = 1; i <= 10000; i++)
    {
        check = check_self(i);
        if (check < 10001)
            arr[check] = 1;
    }
    for(i = 1; i <= 10000; i++)
    {
        if(arr[i] != 1)
            printf("%d\n", i);
    }
    return 0;
}