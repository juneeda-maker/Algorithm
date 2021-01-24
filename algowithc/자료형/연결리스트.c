#include <stdio.h>
#include <stdlib.h>

//연결 리스트의 기본 단위가 되는 node 구조체를 정의
typedef struct node
{
    //node 안에서 정수형 값이 저장되는 변수를 name으로 지정
    int number;
    //다음 node의 주소를 가리키는 포인터를 *next로 지정.
    struct node *next;
}node;

int main(void)
{
    //list라는 이름의 node 포인터를 정의한다. 연결 리스트의 가장 첫번째 node를 가리킬 것이다
    //이 포인터는 현재 아무것도 가리키고 있지 않아서 NULL로 초기화한다
    node *list = NULL;

    //새로운 node를 위해 메모리를 할당하고 포인터 *n으로 가리킴
    node *n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }

    //n의 number필드에 1의 값을 저장. "n -> number"는 "(*n).number"와 동일한 의미
    //즉, n이 카리키는 node의 number필드를 의미
    //n 의 number 의 값을 1로 저장
    n -> number = 1;

    //n다음에 정의된 node가 없으므로 NULL 로 초기화
    n -> next = NULL;

    //이제 첫번째 node를 정의했기 때문에 list 포인터를 n포인터로 바꿔준다.
    list = n;

    //이제 list에 다른 node를 더 연결하기 위해 n에 새로운 메모리를 다시 할당
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }

    //n의 number와 next값을 각각 저장
    n->number = 2;
    n -> next = NULL;

    //list가 가리키는 것은 첫 번째 node 이다.
    //이 node의 다음 node를 n포인터로 지정.
    list -> next = n;

    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }

    n -> number = 3;
    n -> next = NULL;

    list->next->next = n;

    
    //이제 list에 연결된 node를 처음부터 방문하면서 각 number값을 출력
    //마지막 node의 next에는 NULL이 저장되어 있을 것 이기 떄문에 이것이 for 루프의 죵료 조건이 됨.
    for(node *tmp = list; tmp!= NULL; tmp= tmp ->next)
    {
        printf("%d\n", tmp->number);
    
    }

    //메모리를 해제 해주기 위해 list 에 연결된 node들을 처음부터 방문하면서 free해줌.
    while(list !=NULL)
    {
        node *tmp = list -> next;
        free(list);
        list = tmp;
    }
}