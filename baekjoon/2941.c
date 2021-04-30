#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int count;

    scanf("%s", str);
    count = strlen(str);

    for (int i = 0; i < strlen(str); i++)
    {
        if((str[i] == 'l' || str[i] == 'n') && str[i+1] == 'j') 
            count--; 
        if(str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=') 
            count--; 
        if(str[i] == '=' || str[i] == '-') 
            count--;
    }
    printf("%d", count);
}