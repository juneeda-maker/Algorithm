#include <stdio.h>

int main(void)
{
    int i,j,min,index,temp;
    int arr[10] = {1,10,5,8,7,6,4,3,2,9};
    for(i = 0; i < 10; i++) //비교할 기준 인덱스
    {
        min = 9999;
        for(j = i; j < 10; j++) //나머지 인덱스와 비교 
        {
            if(min > arr[j])
            {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;

    }

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}