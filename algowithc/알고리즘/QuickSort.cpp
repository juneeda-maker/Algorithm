#include <stdio.h>

int number = 10;
int data[] = {1,10,5,8,7,6,4,3,2,9};

void show()
{
    int i;
    for(int i = 0; i < number; i++)
    {
        printf("%d ", data[i]);
    }
    
}

void quickSort(int *data, int start, int end)
{
    if(start >= end) //원소가 1개인 경우
    {
        return;
    }

    int key = start; //키(피벗 값)는 첫번째 원소 
    int i = start +1; //왼쪽 출발지점(큰 값 찾기)
    int j = end; //오른쪽 출발지점(작은 값 찾기)
    int temp;

    while(i <= j)//엇갈릴 때까지 반복
    {
        while(i <= end && data[i] <= data[key]){ //키 값보다 큰 값을 만날때 까지
            i++;
        }
        while(data[j] >= data[key] && j > start) //키 값보다 작은 값을 만날때 까지
        {
            j--;
        }
        if(i > j) //현재 엇갈린 상태면 키 값과 교체 //엇갈린 상태가 되어야 정렬이 완성 된 상태로 , 그 전까지는 계속 동일한 부분을 반복하게 된다.
        {
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;

        }
        else
        {
            temp = data[j];
            data[j] = data[i]; 
            data[i] = temp;
        }
    }
    printf(" --i j입니다 %d %d-- ", i,j);
    quickSort(data, start, j-1); //한번 정렬이 끝나면 그상태에서 왼쪽과 오른쪽을 나눠 다시 정렬을 해주기 위한 재귀함수
    quickSort(data, j+1, end);
}

int main(void)
{
    quickSort(data, 0, number - 1);
    show();
   return 0;
}

