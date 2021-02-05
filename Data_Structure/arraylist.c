#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


#define MAX_LIST_SIZE (10)

typedef int Element;

typedef struct {
    Element buf[MAX_LIST_SIZE];
    int size;
} ArrayList;

void init(ArrayList *list);
bool isEmpty(const ArrayList *list);
bool isFull(const ArrayList *list);
void print(const ArrayList *list);
bool isInList(const ArrayList * list, Element elem);
int getSize(const ArrayList * list);
void addLast(ArrayList *list, Element elem);
void addPos(ArrayList *list, int pos, Element elem);
void rremove(ArrayList *list, Element elem);
int searchLinear(const ArrayList *list, Element elem);
int searchLinearOnSorted(const ArrayList *list, Element elem);
int searchBinaryOnSorted(const ArrayList *list, Element elem);
int searchBinaryOnSortedRecursively(const ArrayList *list, Element elem, int first, int last);
void sort(ArrayList *list);







int main(void)
{
    ArrayList data;

    init(&data);
    print(&data);

    addLast(&data, 1);
    addLast(&data, 2);
    addLast(&data, 3);
    print(&data);

    rremove(&data, 3);
    print(&data);

    addPos(&data, 0 , 8);
    print(&data);

    rremove(&data, 1);
    addLast(&data, 13);
    addLast(&data, 33);
    addLast(&data, 37);
    addLast(&data, 5);
    addLast(&data, 21);

    print(&data);

    printf("%d is %d-th item.", 2, searchLinear(&data, 2));
    //sort
    
    
}


void init(ArrayList *list) //리스트 초기화 
{
    list -> size = 0;
}

bool isEmpty(const ArrayList *list) //리스트가 비어있는지 
{
    return (list->size == 0);
}

bool isFull(const ArrayList *list) //가득차 있는지
{
    return (list->size == MAX_LIST_SIZE);
}

void print(const ArrayList *list) // 모든 항목 출력
{
    for(int i = 0; i < list -> size; i++)
    {
        printf("%d ", list->buf[i]);
    }
    printf("\n");
}

bool isInList(const ArrayList * list, Element elem){ //찾고자 하는게 있는지
    for(int i =0; i < list->size; i++)
    {
        if(list->buf[i] == elem)
        {
            return true;
        }
    }
    return false;
}

int getSize(const ArrayList * list) //항목 개수 반환
{
    return list->size;
}

void addLast(ArrayList *list, Element elem) //끝에 아이템 추가
{
    if(!isFull(list)){
        list->buf[list->size] = elem;
        list->size++;
    }

    else printf("Error: List Full\n");
}

void addPos(ArrayList *list, int pos, Element elem) //pos 위치에 아이템 추가
{
    if(!isFull(list) && pos >= 0 && pos <= list->size)
    {
        for(int i = list -> size -1; i >= pos; i--)
        {
            list ->buf[i+1] = list ->buf[i];
        }
        list ->buf[pos] = elem;
        list->size++;
    }
    else printf("Error: List Full or Position Error\n");
}

void rremove(ArrayList *list, Element elem) //아이템 삭제
{
    if(!isInList(list, elem)){
        printf("not exists\n");
        return;
    }

    if(!isEmpty(list))
    {
        for(int i = 0; i < list->size; i++)
        {
            if(list->buf[i] == elem)
            {
                for(int j = i + 1; j < list -> size; j++)
                {
                    list->buf[j-1] = list->buf[j];
                }
                list->size--;
                return;
            }
        }
    }
    else
    {
        printf("Error: List Empty\n");
    }
    
}

int searchLinear(const ArrayList *list, Element elem){ //순차 검색으로 리스트에서 아이템 위치 반환
    for(int i = 0; i < list->size; i++)
    {
        if(list->buf[i] == elem)
        {return i;}
    }
    return -1;
}

int searchLinearOnSorted(const ArrayList *list, Element elem) //정렬된 리스트에서 순차검색으로 아이템 위치 반환
{
    for(int i = 0; i < list->size; i++)
    {
        if(list->buf[i] == elem)
            {return i;}
        else if(list ->buf[i] > elem)
            {return -1;}
    }
    return -1;
}

int searchBinaryOnSorted(const ArrayList *list, Element elem) //정렬된 리스트에서 이진 검색으로 아이템 위치 반환
{
    int first = 0;
    int last = list ->size -1;

    while(first <= last)
    {
        int middle = (int)floor((first + last) / 2);

        if(list ->buf[middle] == elem)
        {   return middle;}
        else if(list ->buf[middle] < elem)
            {first = middle + 1;}
        else
            {last = middle -1;}    
    }
    return -1;
}

int searchBinaryOnSortedRecursively(const ArrayList *list, Element elem, int first, int last)
{
    if(last >= first)
    {
        int middle = (int)floor((first + last) / 2);

        if(list -> buf[middle] ==  elem)
            {return middle;}
        else if(list -> buf[middle] < elem)
            {return searchBinaryOnSortedRecursively(list, elem, middle + 1, last);}
        else    
            {return searchBinaryOnSortedRecursively(list, elem, first, middle -1);}
    }

    return -1;
}

void sort(ArrayList *list) //정렬
{
    Element temp;

    if(isEmpty(list)) return;

    for(int i = 0; i < list -> size -1; i++)
    {
        int jmin = i;
        for(int j = i +1;  j < list -> size; j++)
        {
            if(list->buf[j] < list -> buf[jmin])
            {jmin = j;}
        }

        if(jmin != i)
        {
            temp = list ->buf[i];
            list -> buf[i] = list ->buf[jmin];
            list->buf[jmin] = temp;
        }
    }

    return;
}



