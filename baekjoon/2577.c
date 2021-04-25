#include <stdio.h>

int ch(int num)
{
    int rest;

    rest = num % 10;

    return rest;    
}

int main()
{
    int a,b,c;
    int result;
    int n_arr[11] = {0,};
    int i;
    
    scanf("%d %d %d", &a, &b ,&c);
    result = a * b * c;
    
    while (result)
    {
        n_arr[ch(result)] += 1;
        result = result / 10;
    }
    i = 0;
    while (i < 10)
    {
        printf("%d\n", n_arr[i]);
        i++;
    }
}