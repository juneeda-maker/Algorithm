#include <stdio.h>
int main()
{
    double height, weight;
    scanf("%lf %lf",&height, &weight);

    double avr = (height - 100) * 0.9;
    double bmi = (weight - avr) * 100 / avr;

    if(bmi <= 10)
    {
        printf("정상");
    }
    else if(10 < bmi && bmi <= 20)
    {
        printf("과체중");
    }
    else
    {
        printf("비만");
    }
    


    return 0;
}