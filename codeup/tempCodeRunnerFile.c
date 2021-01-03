#include <stdio.h>
int main()
{
    /*
    char data[31]="";
    fgets(data,31,stdin);
    printf("%s", data);
    */

   char data[31]="";
   scanf("%[^\n]s", data);
   printf("%s", data);

    return 0;
}