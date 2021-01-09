#include <stdio.h>
#include <math.h>
int main()
{
    float a,b;
    float plu, min1, min2, mul, div1, div2, p1, p2,result;

    scanf("%f %f", &a, &b);

    plu = a + b;
    min1 = a - b;
    min2 = b - a;
    mul = a * b;
    div1 = a/b;
    div2 = b/a;
    p1 = pow(a,b);
    p2 = pow(b,a);

    result = plu >= min1 ? plu : min1;
    result = result >= min2 ? result : min2;
    result = result >= mul ? result : mul;
    result = result >= div1 ? result : div1;
    result = result >= div2 ? result : div2;
    result = result >= p1 ? result : p1;
    result = result >= p2 ? result : p2;

    printf("%0.6f", result);
    return 0;
}