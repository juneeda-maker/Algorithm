
## 변수와 자료형

### •변수의 개념

<br/>




__변수__ 란 숫자, 문자와 같은 값들을 저장하는 공간이며,
변수가 정의되면 변수의 자료형 크기만큼 메모리 영역이 할당된다.
변수를 정의하고 나면 그 변수의 메모리 안에는 어떤 값들이 들어있는지 알 수 없기에
기존에 썼던 내용을 지우개로 지우는 것처럼 변수도 __초기화__ 하는 과정이 필요하다.

<br/><br/>




### •변수를 초기화하는 방법


<br/>


__1.변수를 정의와 함께 초기화__

```c
int number = 0;
shortMyAge = 33;
```

__2.변수의 정의 이후 별도의 초기화__

```c
int number;
shortMyAge;
  ...
number = 0;
  ...
Age = 33;  
```

<br/><br/>
### •자료형이란
__자료형(Data Type)__ 이란 데이터를 저장하는 공간이다.
단, 데이터가 저장되는 공간이 메모리이다.

  자료형|이름|크기
---|---|---|
정수형|char|1바이트|
정수형|unsigned char|1바이트|
정수형|short|2바이트|
정수형|unsigned short|2바이트|
정수형|int|4바이트|
정수형|unsigned int|4바이트|
정수형|long|4바이트|
정수형|unsigned long|4바이트|
정수형|long long|8바이트|
정수형|unsigned long long|8바이트|
실수형|float|4바이트|
실수형|double|8바이트|
실수형|long double|8바이트 이상|



### •스택과 큐




__1.스택__


스택의 기본 구성은 데이터를 저장할 공간과 제일 바닥을 가리키는 바틈(Bottom), 데이터 제일 위를 가리키는 탑(Top)으로 구성되어 있다.
스택안으로 데이터를 저장하는 push() 함수와 스택에서 데이터를 꺼내는 pop() 을 사용한다.
'후입 선출' 또는 'LIFO' 라는 방식을 따르게 된다.

가장 나중에 들어온 값이 가장 먼저 나가는 것이다.

뷔페에서 접시를 쌓아 뒀을 때 사람들이 가장 위에 있는(즉, 가장 나중에 쌓인) 접시를 가장 먼저 들고 가는것과

동일하다.

역시 배열이나 연결 리스트를 동해 구현 가능하다.

<img src="https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2Fby1qnT%2FbtqBE1v1UlX%2FzbnXdYnGAXhMYbcDCca6WK%2Fimg.png">
이미지 출처 : https://devuna.tistory.com/22

```c
#include<stdio.h>
#include<string.h>
 
#define TRUE 1            //1반환 
#define FALSE 0           //0반환 
#define MAX_SIZE 10000    //스택 배열 사이즈 
 
typedef struct _stack{    
    int arr[MAX_SIZE]; //스택의 긴 통
    int top;//스택의 상단
} Stack;
 
void StackInit(Stack * sp){    //스택 초기화
    sp->top = -1;               // 배열에서 인덱스는 0부터 시작하므로 , top 이 0이라면 스택에 데이터가 하나 있다는 의미여서 -1로 설정해 준다.
}
 
int IsEmpty(Stack * sp){    //스택이 비어있는지 
    if(sp->top == -1) 
        return TRUE;
        
    return FALSE;
}
 
int Size(Stack *sp){    //스택의 size 반환 
    return sp->top + 1;
}
 
 
int IsFull(Stack * sp){        //스택이 꽉 차있는지 확인 
    if(sp->top + 1 >= MAX_SIZE) 
        return TRUE;
    
    return FALSE;
}
 
void Push(Stack * sp, int data){    //스택의 push 
    if(IsFull(sp)==TRUE) 
        return;
    
   
    sp->arr[++(sp->top)] = data;    
}
 
int Pop(Stack * sp){   
    if(IsEmpty(sp) == TRUE) 
        return -1; //비어있는 경우
 
   
    return sp->arr[(sp->top)--];
}
 
int Top(Stack *sp){    //스택의 top에 있는 항목을 반환합니다. 
    if(IsEmpty(sp) == TRUE) 
        return -1;
    
    return sp->arr[sp->top];
}
 
 
int main(void){
    int i;
    char str[6]; //push,pop 등등 내릴 명령들
    Stack stack;
    int n, num;
    
    scanf("%d", &n);
    StackInit(&stack);    
    
    
    for(i=0; i<n; i++){
    
        scanf("%s", str);
   
 
        if(!strcmp(str, "push")){    
            
            scanf("%d", &num);
            Push(&stack, num);    
            
        }else if(!strcmp(str, "pop")){    
        
            printf("%d\n", Pop(&stack));
        
        }else if(!strcmp(str, "empty")){     
            
            printf("%d\n", IsEmpty(&stack));
            
        }else if(!strcmp(str, "size")){         
        
            printf("%d\n", Size(&stack));
        
        }else if(!strcmp(str, "top")){         
        
            printf("%d\n", Top(&stack));
        
        }
    }
    
    
    return 0;    
}
```


__2.큐__


큐는 값이 아래로 쌓이는 구조이다.

값을 넣고 뺄 때 '선입선출' 또는 'FIFO' 라는 방식을 따르게 된다.

가장 먼저 들어온 값이 가장 먼저 나가는 것이다.

식당에서 주문을 하기 위해 줄을 설때 가장 먼저 줄을 선 사람이 가장 먼저  주문을 하는것 과 동일하다.

배열이나 연결리스트를 통해 구현 가능하다.

<img src="https://img1.daumcdn.net/thumb/R1280x0/?scode=mtistory2&fname=https%3A%2F%2Fblog.kakaocdn.net%2Fdn%2FZce3U%2FbtqBDaOfGU5%2FRc2kR3Puqi3QiQa3o6CPL1%2Fimg.png">
ex)매표소
이미지 출처 : https://devuna.tistory.com/22

```
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
```