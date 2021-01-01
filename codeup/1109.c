#include <stdio.h>
int main()
{
    char name[20];
    int age;
    char c;
    double b;

    scanf("%s", name);
    scanf("%d", &age); 
    scanf(" %c", &c);
    scanf("%lf", &b);

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%c\n", c);
    printf("%g", b);

    return 0;
}