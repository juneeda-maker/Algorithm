#include <stdio.h>
long long int func(long long int sum, int t, int x)
{   
    int i;

    
    for(i = t; i > 1; i--)
    {
        sum = sum * x;
       
    }
    return sum;
    
    
}

int main()
{
    
    long long int a,r,n;
    scanf("%lld %lld %lld", &a,&r,&n);


  printf("%lld" ,func(a, n, r));
    return 0;
}