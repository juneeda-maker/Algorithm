#include <stdio.h>
int main(){
    long long int h,b,c,s;
    float result;
    scanf("%lld %lld %lld %lld", &h, &b, &c, &s);
    result = h*b*c*s;
    printf("%0.1f MB", result/(8 * 1024 * 1024));

    
}