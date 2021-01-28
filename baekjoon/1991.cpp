#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char data;
    struct node *left;
    struct node *right;
} node;

node *create(char c)
{
    node *n = (node *)malloc(sizeof(node));
    n -> left = NULL;
    n -> right = NULL;
    n -> data = c;

    return n;
}

void preorder(node *o) { //전위 방문 
    if(o == NULL)
       {return;}
    printf("%c", o->data);
    preorder(o->left);
    preorder(o->right);    
}

void inorder(node *o) //중위 방문
{
    if(o == NULL)
        {return;}
    inorder(o->left);
    printf("%c", o->data);
    inorder(o->right);    
}

void postorder(node *o) //후위 방문
{
    if(o == NULL)
        {return;}
    postorder(o->left);
    postorder(o->right);
    printf("%c", o->data);

}





int main(void)
{
    node * root[27];
    int n;
    char a,b,c, arr[100][2];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf(" %c %c %c", &a, &b, &c);
        arr[i][0] = b; arr[i][1] = c; //[i][0]왼쪽 자식 노드의 값 , [i][1]오른쪽 자식 노드의 값
        root[i] = create(a); //노드 생성
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            //배열에 저장된 값과 노드의 데이터(root->data)가 같을 때 그 노드를 왼쪽 자식노드로 저장 
            if (arr[i][0] == root[j]->data) //왼쪽 자식 노드 arr[i][0]와 root[j]->data 같은 값을 가지면 자식노드로 
                root[i]->left = root[j];
            //배열에 저장된 값과 노드의 데이터(root->data)가 같을 때 그 노드를 오른쪽 자식노드로 저장 
            if (arr[i][1] == root[j]->data)
                root[i]->right = root[j];
        }
    }

     preorder(root[0]);
    printf("\n");
    inorder(root[0]);
    printf("\n");
    postorder(root[0]);
 
    return 0;
}