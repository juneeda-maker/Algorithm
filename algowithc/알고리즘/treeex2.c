//중위 순회 알고리즘
#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
    char data;
    struct _node*l;
    struct _node*r;
}node;

node *p_A,*p_B,*p_C,*p_D,*p_E,*p_F,*p_G;

void traverse(node*);
void visit(node*);
void traverse(node *p_node)
{
    if(p_node !=NULL){
        traverse(p_node -> l); //왼쪽 자식 노드 방문
        visit(p_node); //현재노드 방문
        traverse(p_node -> r); //오른쪽 자식 노드 방문
    }    
}

void visit(node *c_node)
{
    printf("%2c ->", c_node -> data);
}

int main(){

    p_A = (node*)malloc(sizeof(node));
    p_B = (node*)malloc(sizeof(node));
    p_C = (node*)malloc(sizeof(node));
    p_D = (node*)malloc(sizeof(node));
    p_E = (node*)malloc(sizeof(node));
    p_F = (node*)malloc(sizeof(node));
    p_G = (node*)malloc(sizeof(node));


    p_A->data = 'A';
    p_B->data = 'B';
    p_C->data = 'C';
    p_D->data = 'D';
    p_E->data = 'E';
    p_F->data = 'F';
    p_G->data = 'G';

    p_A ->l = p_B;
    p_A ->r = p_C;
    p_B ->l = p_D;
    p_B ->r = p_E;
    p_C ->l = p_F;
    p_C ->r = p_G;

    p_D -> l =NULL;
    p_D -> r =NULL;
    p_E -> l =NULL;
    p_E -> r =NULL;
    p_F -> l =NULL;
    p_F -> r =NULL;
    p_G -> l =NULL;
    p_G -> r =NULL;

    traverse(p_A);

    printf("\n");

    free(p_A);
    free(p_B);
    free(p_C);
    free(p_D);
    free(p_E);
    free(p_F);
    free(p_G);


    return 0;
}