#include<stdio.h>
#include<stdlib.h>


typedef struct _node{
    char data;
    struct _node *link;
}node;

node*p_head, *p_end, *temp;
node*p_node_1, *p_node_2, *p_node_3, *p_node_4;

void Init_LinkedList(void);
void InsertNODE(node*);

int main()
{
    node*p_node;
    int i = 0;
    Init_LinkedList();

    /*연결 리스트의 노드에 저장한 데이터의 출력 */
    p_node = p_head -> link;
    for(i=0; i < 4; i++)
    {
        printf("%2c", p_node -> data);
        p_node = p_node -> link;
    }

    /* 새로운 노드의 생성*/
    printf("\n");
    p_node = (node*)malloc(sizeof(node));
    p_node -> data = 'C';

    /*새로 생성한 노드의 삽입 */
    InsertNODE(p_node);

    /*연결 리스트의 노드에 저장한 데이터의 출력 */
    p_node = p_head -> link;
    for(i = 0; i < 5; i++)
    {
        printf("%2c", p_node -> data);
        p_node = p_node -> link;
    }


    return 0;
    
}

void Init_LinkedList(void)
{
    node*p_node;
    p_head = (node*)malloc(sizeof(node));
    p_end = (node*)malloc(sizeof(node));
    p_node_1 = (node*)malloc(sizeof(node));
    p_node_1 -> data = 'A';
    p_head -> link = p_node_1;
    p_node_1 -> link = p_end;
    p_end -> link = p_end;
    p_node = p_node_1;
    p_node_2 = (node*)malloc(sizeof(node));
    p_node_2 -> data = 'B';
    p_node -> link = p_node_2;
    p_node_2 -> link = p_end;
    p_node = p_node_2;
    p_node_3 = (node*)malloc(sizeof(node));
    p_node_3 -> data = 'D';
    p_node -> link = p_node_3;
    p_node_3 -> link = p_end;
    p_node = p_node_3;
    p_node_4 = (node*)malloc(sizeof(node));
    p_node_4 -> data = 'E';
    p_node -> link = p_node_4;
    p_node_4 -> link = p_end;
    p_node = p_node_4;

}

void InsertNODE(node*p_node)
{
    node * c_node;

    for(c_node = p_head; c_node !=p_end; c_node=c_node -> link)
    {
        if(c_node -> link -> data> p_node -> data)
        break;
    }

    p_node -> link = c_node -> link;
    c_node -> link = p_node;
}