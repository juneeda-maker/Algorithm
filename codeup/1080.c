#include <stdio.h>

int main(){
    int max;
    int sum = 0;
    int i = 0;
   

    scanf("%d", &max);


    while(sum < max)
    {
        i++;
        sum = sum + i;
    }
    printf("%d\n", i);
    
    



    return 0;
}