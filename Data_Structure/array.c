#include <stdio.h>
#define MAX_SIZE (10)

typedef struct min_max 
{
    int min;
    int max;
} mn;


void print(const int data[]); //배열 요소들 출력 하는 함수
int isInArray(const int data[], int e); //배열에 원하는 항목이 있는지 검색
int max(const int data[]); //최댓값
mn minmax(const int data[]);
void average(const int data[]);



int main(void)
{
    int data[10] = {23,42,52,12,5,19,100,33,54,2};

    

   // print(data);

   // printf("%d\n", isInArray(data, 12));

   // printf("%d\n", isInArray(data, 11));

   // printf("Max: %d\n", max(data));

   //average(data);

   minmax(data);

}


void reverse_print(const int data[])
{
    for(int i = MAX_SIZE; i >= 0 ; i--)
    {
        printf("%d ", data[i]);
    }
}

void print(const int data[]) 
{
    for(int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}

int isInArray(const int data[], int e) 
{
    for(int i = 0; i < MAX_SIZE; i++)
    {
        if(data[i] == e)
            return i;
    }
    return -1;
}

int max(const int data[])
{
    int max = data[0];

    for(int i = 1; i < MAX_SIZE; i++)
    {
        if(data[i] > max)
        {
            max = data[i];
        }
    }

    return max;
}

mn minmax(const int data[])
{
    
    mn result;
    result.max = data[0];
    result.min = data[0];

    for(int i = 0; i < MAX_SIZE; i++)
    {
        if(data[i] > result.max)
        {
            result.max = data[i];
        }
        if (data[i] < result.min)
        {
            result.min = data[i];
        }
        
    }
    printf("%d %d", result.max, result.min);

    return result;
}

void average(const int data[])
{
    int sum = 0;
    for(int i = 0; i < MAX_SIZE; i++)
    {
        sum = sum + data[i];
    }

    int avg = sum/MAX_SIZE;
    printf("%d\n", avg);

    for(int i = 0; i  < MAX_SIZE; i++)
    {
        if(data[i] > avg){
             printf("%d ", data[i]);
        }
        continue; 

    }
}