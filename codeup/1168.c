#include <stdio.h>
int main()
{
    int y,s;
    int age;
    scanf("%d %d", &y, &s);

    if(s == 1 || s == 2)
    {
       age =  112 - (int)(y * 0.0001) + 1;
    }
    else
    {
        age = 12 - (int)(y*0.0001) + 1; 
    }

    printf("%d", age);

    return 0;
}