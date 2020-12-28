#include <stdio.h>
#include <string.h>

int main(){
    /*
    char arr[100] = "gunny";
    int box;

    box = strlen(arr);
    printf("%d", box);
    */

   /*
    char arr[100] = "gunny33333";
    char arr2[100] = "gunny";

    strcpy(arr, arr2);

    printf("%s", arr);
    */

   /*
    char arr[100] = "gunny";
    char arr2[100] = "gunny";

    int box;

    box = strcmp(arr, arr2);

    if(!box){
        printf("Same String");
    }
    else{
        printf("Diff String");
    }
    */

   /*
    char arr[100] = "gunny";
    char arr2[100] = " gunny7777";

    strcat(arr, arr2);

    printf("%s", arr);
    */

    char arr[100] = "algorithm together";

    char ch = 'm';
    char *pos;

    pos = strchr(arr, ch);

    printf("%s", pos);


    return 0;
}
