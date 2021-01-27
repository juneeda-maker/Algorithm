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
        return -1; //들어 있는 정수가 없는 경우
 
   
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

