#include <stdio.h>
int main()
{
    //1
    
    char str[31] = " ";
    fgets(str, 31, stdin);
    printf("%s", str);
    

    //2
    char str[31] = "";
    scanf("%[^\n]s",str);
    printf("%s", str);

    return 0;
}