#include <stdio.h>
#include <stdlib.h>


//연결리스트를 구현할 구조체
typedef struct NODE{
    int data;
    struct NODE* next;
}node;

int main(){
    /*
    //일반변수
    int num = 40;

    //포인터 변수 선언과 초기화
    int* numPointer = NULL;

    //num의 주소를 numPointer 포인터 변수에 저장
    numPointer = &num;

    //일반 변수 num의 값 출력
    printf("num=%d\n", num);

    //num의 주소값 출력
    printf("&num = %x\n", &num);
    printf("numPointer = %x\n", numPointer);

    //numPointer가 가지고 있는 주소의 데이터 값
    printf("*numPointer=%d\n", *numPointer);
    
    //numPointer의 주소
    printf("&numPointer = %x\n", &numPointer);

    // numPointer의 주소의 값의 값
     printf("**&numPointer = %d\n", **&numPointer);
     printf("**&numPointer = %d\n", *&num);
    */

   /*
   int* p = (int*)malloc(sizeof(int) * 3);

   p[0] = 1;
   p[1] = 2;
   p[2] = 3;

   printf("%d\n%d\n%d\n", p[0],p[1], p[2]);

   free(p);


 char **str = (char**) malloc(sizeof(char*) * 3);
str[0] = (char*) malloc(sizeof(char) * 5);

str[1] = (char*) malloc(sizeof(char) * 4);

str[2] = (char*) malloc(sizeof(char) * 3);

 

strcpy(str[0], "abcd");

strcpy(str[1], "efg");

strcpy(str[2], "hi");

 

free(str[0]);

free(str[1]);

free(str[2]);

free(str);
*/


node* head = (node*)malloc(sizeof(node)); //헤드(시작)노드 생성
head -> next = NULL; //node1의 다음 주소는 머리노드가 가르키던 다음주소(NULL)를 저장

node* node1 = (node*)malloc(sizeof(node));
node1 -> next = head -> next;
node1 -> data = 10;
head -> next = node1; //머리노드 다음 노드는 node1의 주소를 저장

node* node2 = (node*)malloc(sizeof(node));
node2 -> next = node1 -> next;
node2 -> data = 20;
node1 -> next = node2;


node* curr = head -> next; //순회용 노드 생성
while(curr != NULL){
    printf("%d\n", curr -> data);
    curr = curr -> next;
}


free(head);
free(node1);
free(node2);

return 0;
}