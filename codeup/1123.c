#include <stdio.h>
int main()
{
    int temp;
    scanf("%d", &temp);

    float temp2;
    temp2 = (float)9/5*((float)temp)+32;

    printf("%0.3f", temp2);
    return 0;
}