//배열로 큐 구현하기
#define MAX 10 // 큐의 크기


//큐 선언
int Queue[MAX];
int Front, Rear;
void InitQUEUE(void);
void enqueue(int);
void DisplayQUEUE(void); 
int dequeue(void);

int main()
{
    int ret;
    InitQUEUE();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    printf("다섯번의 enqueue() 호출 후 결과\n");
    DisplayQUEUE();

    ret = dequeue();
    ret = dequeue();
    ret = dequeue();
    printf("세번의 dequeue() 호출 후 결과\n");
    DisplayQUEUE();

    printf("두번의 dequeue() 호출 후 결과\n");
    ret = dequeue();
    ret = dequeue();
    DisplayQUEUE();

    return 0;
}

//큐 초기화 함수
void InitQUEUE(void)
{
    Front = Rear = 0;
}

void enqueue(int num)
{
    Queue[Rear++]=num;
    if(Rear >= MAX)
        Rear = 0;
}

int dequeue(void)
{
    int ret;
    ret = Queue[Front++];
    if(Front >= MAX)
        Front = 0;
    return ret;    
}

void DisplayQUEUE(void)
{
    int i;
    printf("Front ->");
    for(i = Front; i <Rear; i++)
        printf("%2d ->",Queue[i]);
    printf("Rear");
    printf("\n");    
}

