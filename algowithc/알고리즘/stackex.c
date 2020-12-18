#include<stdio.h>
#include<stdlib.h>

//스택 구조 예제 


//배열로 스택 구현하기
#define MAXSIZE 10 // 스택의 크기 정의
int stack[MAXSIZE]; //스택의 긴 통
int top; //스택의 상단


//스택의 초기화 
void init_stack ()
{
    top = -1;
    //배열의 인덱스는 0부터 시작 하므로 top 0 이라면 스택에 데이터가 하나 있다는 의미
}

int push(unsigned int val)
{
    if( top >= MAXSIZE -1) {
        printf("\nStack Overflow\n");
        return -1;
    }
    stack[++top] = val;
    return val;
}

int pop(void)
{
    if(top < 0)
    {
        printf("\nStack Underflow\n");
        return -1; //종료 
    }

    return stack[top--];
}

void print_stack(){
    int i;
    printf("\n Stack From Top-----------> To Bottom\n");
    for(i = top; i >= 0; i--)
        printf("%-6d", stack[i]);
}




int main()
{
    int i;
    init_stack();

    printf("\nPush 5, 4, 7, 8, 2, 1");
    push(5);
    push(4);
    push(7);
    push(8);
    push(2);
    push(1);
    print_stack();

    printf("\nPop");
    i = pop();
    print_stack();
    printf("\n popped value is %d\n", i);

    printf("\nPush 3, 2, 5, 7, 2");
    push(3);
    push(2);
    push(5);
    push(7);
    push(2);
    print_stack();

    printf("\nNow Stack is full, push 3");
    push(3);
    print_stack();

    printf("\nInitialize stack");
    init_stack();
    print_stack();

    printf("\nNow Stack is empty, pop");
    i = pop();
    print_stack();
    printf("\n popped value is %d\n", i);

    
    return 0;
}

//출처 : https://hellmath.tistory.com 보고 연습함