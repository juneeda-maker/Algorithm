#include <stdio.h>

#define SIZE 8

int main()
{
    int temp;
    
    int arr[SIZE] = {6,3,8,5,2,7,4,1}; 


    
    for(int i = 0; i < SIZE -1; i++) //(n-1)...(n-2)..(n-3)..이런 식으로 전체를 정렬해야 하는 횟수가 줄어듬
    {                          //   왜냐. 한번 정렬시에 마지막 숫자 8은 이미 정렬 되어있음
        for(int j = 0; j < (SIZE-1) - i; j++){ //인덱스 번호 비교를 위한 반복문
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }



    for(int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
        
    }
    
    return 0;
}