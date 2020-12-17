#include<stdlib.h>

//스택 데이터의 구조
typedef struct _node{
    int data;
    struct _node *link;
}node;

//스택의 초기화 예제
void Init_Stack(void)
{
    head = (node*)malloc(sizeof(node));
    end = (node*)malloc(sizeof(node));
    head -> link = end;
    end -> link = end;
}

