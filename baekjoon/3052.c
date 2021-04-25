#include <stdio.h>

int main()
{
    int rest[10];
    int count;
    int i;
    int result;

    count = 0;
    i = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &rest[i]);
        rest[i] = rest[i] % 42;
    }


    for(int i=0; i<10; i++) {
        int count=0; 
        for(int j=0; j < i; j++) { 
            if(rest[i] == rest[j]) count++;
        }
        if (count == 0) result++; 
    }

    printf("%d", result);
}