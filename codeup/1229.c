#include <stdio.h>
int main()
{
    double h,w;
    scanf("%lf %lf", &h ,&w);
    double avr;
    double bmi;

    if(h < 150)
    {
        avr = h - 100;
    }
    else if(150 <= h && h < 160)
    {
        avr = (h - 150) / 2 + 50;
    }
    else
    {
        avr = (h - 100) * 0.9;
    }

    bmi = (w-avr) * 100/ avr;

    if(bmi <= 10)
    {
        printf("정상");
    }
    else if(bmi > 10 && bmi <= 20)
    {
        printf("과체중");
    }
    else
    {
        printf("비만");
    }
    
    
    return 0;
}