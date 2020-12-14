//배열을 이용한 노드 삽입 알고리즘의 예제
#include<stdio.h>

char my_data[5] = {'A','B','D','E'};
char c;

int main()
{
    int i, search_data, insert_data;
    c = 'C';

    for(i = 0; i < 5; i++)
    {
        printf("%2c", my_data[i]);
        printf("\n");

        for(i = 0; i < 5; i++)
        {
            if(my_data[i] > c)
                break;
        }

        search_data = my_data[i];
        my_data[i] = c;
        i++;

        for(; i < 5; i++) //초기화 식 생략 (생략하면 해당 식이 항상 참으로 간주됨)
        {
            insert_data = my_data[i];
            my_data[i] = search_data;
            search_data = insert_data;
        }

        for(i = 0; i < 5; i++)
        {
            printf("%2c", my_data[i]);
        }    
    }


    return 0;
}