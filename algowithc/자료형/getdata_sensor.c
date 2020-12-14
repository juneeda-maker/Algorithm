#include<stdio.h>

unsigned char fSensor;
unsigned char cCode;
unsigned char GetSensor(unsigned char, int);


int main()
{
    int i;
    fSensor = 0x08;

    for(i = 0; i <8; i++)
        GetSensor(fSensor, i);
        printf("cCode : %c", cCode);

    return 0;
}
unsigned char GetSensor(unsigned char num, int i)
{
    if(num >> i)
        cCode = i + 'A';
    else
    {
        cCode = 0;
        return cCode;
    }
        
}