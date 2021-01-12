#include <stdio.h>
int main()
{
    int a,b;
    char cal;
    scanf("%d%c%d", &a,&cal,&b);

    switch (cal)
    {
        case '+' :
        printf("%d", a+b);
        break;

        case '-' :
        printf("%d", a-b);
        break;

        case '*' :
        printf("%d", a*b);
        break;

        case '/' :
        printf("%.2f", ((double)a/(double)b));
        break;
    }
    return 0;
}