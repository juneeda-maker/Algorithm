#include <stdio.h>

//간단한 키-주소 검색에 대한 예제 프로그램
typedef struct _node{
    int num;
    char name;
}node;
node house[10];


int main(){

    int i;
    for(i = 0; i < 10; i++)
    {
        house[i].num = 1001+i;
        house[i].name = 'A' + i;
    }

    printf("아파트 호수 : [%d]\n", house[0].num);
    printf("주인장 이름 : [%c]\n", house[0].name);
}