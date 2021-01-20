#include <stdio.h>
#define SIZE 8
int main()
{
    int arr[SIZE] = {6,3,8,5,2,7,4,1};
    int min;
    int temp;


    //올바른 예시
    for(int i = 0; i < SIZE-1; i++) // 마지막 인덱스는 비교 대상이 없으니 SIZE - 1 (i = 7 일때 앞에 인덱스들의 정렬이 완료 되어 정렬할 필요 x)
    {   
        min = i; //인덱스의 위치를 변경해야 하니 값을 저장하는 것이 아니라 위치에 관한 인덱스를 저장해야 한다.

       for(int j = i+1;  j < SIZE; j++) //예를들어 arr[0] 이라면 우리는 arr[1] 부터 arr[7]까지 모든 인덱스를 비교해야하기 때문
       {
           if(arr[min] > arr[j])
            {
               min = j;
            }
        }

            //모든 원소들을 거쳐 최소값인 인덱스의 번호를 찾았다면 비교기준으로 설정했던 인덱스의 위치와 바꾼다.
       
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
    }

    for(int i = 0; i < SIZE; i++)
       {
           printf("%d", arr[i]);
       }
       
    return 0;
}


    //틀린(?) 예시
    //위의 코드는 모든 탐색을 마친후 위치를 변경하는 반면, 이 코드는 인덱스를 탐색할때 마다 위치를 변경한다.
    /*
    for(int i = 0; i < SIZE-1; i++)
    {
       for(int j = i+1;  j < SIZE; j++)
       {
           if(arr[i] > arr[j])
            {
                min = arr[j];
                arr[j] = arr[i];
                arr[i] = min;
            }
       }

       for(int k = 0; k < SIZE; k++)
       {
           printf("%d", arr[k]);
       }
       printf("\n");
    }
    return 0;
}
*/

