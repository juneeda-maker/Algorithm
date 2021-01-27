//1차원 배열을 이용한 큐 구현
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10001
#define TRUE 1
#define FALSE 0

typedef int Element;

typedef struct _queue
{
    Element arr[MAX_SIZE];
    int front; //앞쪽
    int rear; //끝쪽
    int size;
} Queue;

void init(Queue *q)
{
    q->front = q->rear = -1;
    q->size = 0;
}

int isEmpty(Queue *q)
{
    if(q->front == q->rear){
        return TRUE;
    }
    return FALSE;
}

int isFull(Queue *q)
{
    if(q->rear + 1 == MAX_SIZE)
    {
        return TRUE;
    }
    return FALSE;
}

void enQueue(Queue *q, Element data)
{
    if(isFull(q) == TRUE)
    {return;}

    q->rear = (q->rear + 1);
    q->arr[q->rear] = data;
    q -> size++;
}

int deQueue(Queue *q)
{
    if(isEmpty(q) == TRUE)
    {
        return -1;
    }
    
    q->front = (q->front +1); //앞쪽에 있는 항목 삭제되면 front 위치도 이동 시켜준다. 
    q->size--;
    return q->arr[q->front];
}

int size_print(Queue *q)
{
    return q->size;
}

int front(Queue *q)
{
    if(isEmpty(q) == TRUE)
    {return -1;}
    return q->arr[(q->front)+1];
}

int back(Queue *q)
{
    if(isEmpty(q) == TRUE)
    {return -1;}
    return q->arr[q->rear];
}

int main(void)
{
    char str[6];
    Queue q;
    int n, num;

    scanf("%d", &n);
    init(&q);

    for(int i =0; i < n; i++)
    {
        scanf("%s", str);

        if(!strcmp(str, "push"))
        {
            scanf("%d", &num);
            enQueue(&q, num);
        }

        else if(!strcmp(str, "pop"))
        {
            printf("%d\n", deQueue(&q));
        }

        else if(!strcmp(str, "size"))
        {
            printf("%d\n", size_print(&q));
        }

        else if(!strcmp(str, "empty"))
        {
            printf("%d\n", isEmpty(&q));
        }

        else if(!strcmp(str, "front"))
        {
            printf("%d\n", front(&q));
        }

        else if(!strcmp(str, "back"))
        {
            printf("%d\n", back(&q));
        }
    }
}

