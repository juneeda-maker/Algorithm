#include <stdio.h>
int main()
{   
    int a,b;

    int kal[5] = {400, 340, 170, 100, 70};

    scanf("%d %d", &a, &b);

    if((kal[a-1] + kal[b-1]) > 500)
    {
        printf("angry");
    }
    else
    {
        printf("no angry");
    }

    
    
    return 0;
}